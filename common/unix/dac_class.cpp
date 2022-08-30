#include <stdio.h>
#include <unistd.h>
#include <thread>
#include <alsa/asoundlib.h>
#include "dac_class.h"
#include "../basics.h"
#include "system.h"

static snd_pcm_t   * handle;
static std::thread * p_thread = nullptr;

static constexpr double CARD_SAMPLRATE = 44100.0;

static void thread_handler (DAC_class * dac) {
  printf("begin thread DAC\n");
  while (loop_running) {
    int16_t * ptr = dac->get_buf();
    dac->send (ptr, PERIOD);    // Svrchní vrstva (Generator) naplní buffer
    dac->outs (ptr, PERIOD);    // a ten se odešle na hardware
  }
  printf("end thread DAC\n");
}

DAC_class::DAC_class() noexcept : AbstractChain(), m_buffer {0},
ptr_l(m_buffer), ptr_h (m_buffer + PERIOD), current (m_buffer) {
  int err = snd_pcm_open (&handle, alsa_dev_name, SND_PCM_STREAM_PLAYBACK, 0);
  if (err < 0) {
    fprintf (stderr, "Playback open error: %s\n", snd_strerror(err));
    return;
  }
  err = snd_pcm_set_params (handle,
                            SND_PCM_FORMAT_S16_LE,
                            SND_PCM_ACCESS_RW_INTERLEAVED,
                            2,
                            (unsigned int) CARD_SAMPLRATE,
                            1, 500000);
  if (err < 0) {
    fprintf (stderr, "Playback set param error: %s\n", snd_strerror(err));
    return;
  }
  p_thread = new std::thread (thread_handler, this);
}
DAC_class::~DAC_class() {
  if (p_thread->joinable()) p_thread->join();
  // printf ("destructor DAC\n");
  usleep (100000);  // chvili trva nez data odtecou
  snd_pcm_close (handle);
  delete p_thread;
}
static constexpr int      INPUT_BIT_RANGE = 24;
static constexpr int      RESAMPLE_IVALUE = (int) (double(1l << INPUT_BIT_RANGE) * (CARD_SAMPLRATE / FSAMPL));
static constexpr unsigned SIGMA_DELTA_MSK = (1u << INPUT_BIT_RANGE) - 1u;

static unsigned resample () {
  static unsigned sigma = 0;   // podstatné je, že proměnná je statická
  sigma &= SIGMA_DELTA_MSK;    // v podstatě se odečte hodnota
  sigma += RESAMPLE_IVALUE;    // integrace prostým součtem
  return sigma >> INPUT_BIT_RANGE;
}
static int old_sample = 0;

int DAC_class::outs (const short * data, const int len) {
  short resbuf [10 * len];
  int   counter = 0;
  for (int n=0; n<len; n++) {
    const int reslen = resample();                      // 5 nebo 6
    const int sample = (data [n] << 12);                // zesileni (16x), + 8 bit pro nepresnost celociselne aritmetiky
    const int delta  = (sample - old_sample) / reslen;  // linearni aproximace, jinak schody, ktere nejdou poslouchat
    for (int i=0; i<reslen; i++) {
      resbuf [counter++] = (old_sample + i * delta) >> 8;
    }
    old_sample = sample;
  }
  short buffer [counter << 1];                          // 2 kanaly L + R
  for (int n=0; n<counter; n++) {
    const short sample = resbuf [n];
    buffer[2*n + 0] = sample;
    buffer[2*n + 1] = sample;
  }
  int n = snd_pcm_writei (handle, buffer, counter);
  if (n<0) n = snd_pcm_recover (handle, n, 0);
  if (n<0) {
    fprintf (stderr, "snd_pcm_writei failed\n");
    return 0;
  }
  return len;
}
int16_t * DAC_class::get_buf() {
  // Střídání bufferů je zde zbytečné, ale MCU bude používat DMA, kde se to hodí.
  if (current == ptr_l) current = ptr_h;
  else                  current = ptr_l;
  return current;
}
