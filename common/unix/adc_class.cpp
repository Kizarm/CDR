#include <stdio.h>
#include <unistd.h>
#include <thread>
#include <alsa/asoundlib.h>
#include "adc_class.h"
#include "../basics.h"
#include "system.h"

static snd_pcm_t   * handle;
static std::thread * p_thread = nullptr;

static constexpr double CARD_SAMPLRATE = 44100.0;

static void thread_handler (ADC_class * adc) {
  printf("begin thread ADC\n");
  while (loop_running) {
    // printf("pass\n");
    int16_t * ptr = adc->get_buf();
    adc->input();
    adc->send (ptr, PERIOD);
  }
  printf("end thread ADC\n");
}

ADC_class::ADC_class() noexcept : AbstractChain(), m_buffer {0},
ptr_l(m_buffer), ptr_h (m_buffer + PERIOD), current (m_buffer) {
  int err = snd_pcm_open (&handle, alsa_dev_name, SND_PCM_STREAM_CAPTURE, 0);
  if (err < 0) {
    fprintf (stderr, "Record open error: %s\n", snd_strerror(err));
    return;
  }
  err = snd_pcm_set_params (handle,
                            SND_PCM_FORMAT_S16_LE,
                            SND_PCM_ACCESS_RW_INTERLEAVED,
                            1,
                            (unsigned int) CARD_SAMPLRATE,
                            1, 500000);
  if (err < 0) {
    fprintf (stderr, "Record set param error: %s\n", snd_strerror(err));
    return;
  }
  p_thread = new std::thread (thread_handler, this);
}
ADC_class::~ADC_class() {
  if (p_thread->joinable()) p_thread->join();
  // printf ("destructor ADC\n");
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
void ADC_class::input () {
  for (int n=0; n<PERIOD; n++) {
    const unsigned cnt = resample();
    short tmp [cnt];
    const int res = snd_pcm_readi (handle, tmp, cnt);
    if (n < 0) {
      fprintf(stderr, "snd_pcm_readi failed %d\n", res);
      return;
    }
    int sum = 0;
    for (unsigned i=0; i<cnt; i++) {
      sum += tmp [i];
    }
    current [n] = sum >> 8;
  }
}
int16_t * ADC_class::get_buf() {
  // Střídání bufferů je zde zbytečné, ale MCU bude používat DMA, kde se to hodí.
  if (current == ptr_l) current = ptr_h;
  else                  current = ptr_l;
  return current;
}
