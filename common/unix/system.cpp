#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include "system.h"

volatile bool loop_running = true;

static void signal_handler (int no) {
  printf("Received : %d\n", no);
  loop_running = false;
}
void PlatformInit () {
  loop_running = true;  // pro jistotu
  signal (SIGINT, signal_handler);
}
void wait () {
  usleep (10000);
}
