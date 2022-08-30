#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <thread>
#include "system.h"
#include "usart.h"

static std::thread * p_thread = nullptr;

static void thread_handler (Usart * usart) {
  const int len = 64;
  char buffer [len];
  printf("begin thread USART\n");
  while (loop_running) {
    int res = ::read (STDIN_FILENO, buffer, len);
    if (res <= 0) {
      wait();
      continue;
    }
    usart->Up (buffer, res);
  }
  printf("end thread USART\n");
}
Usart::Usart(const uint32_t) noexcept : tx_ring() {
  // aby šla smyčka v thread_handler rychle přerušit, nesmí být čtení ze stdin blokováno
  int flags = fcntl(STDIN_FILENO, F_GETFL);
  fcntl (STDIN_FILENO, F_SETFL, flags |  O_NONBLOCK);
  p_thread = new std::thread (thread_handler, this);
}
Usart::~Usart() {
  int flags = fcntl(STDIN_FILENO, F_GETFL);
  fcntl (STDIN_FILENO, F_SETFL, flags & ~O_NONBLOCK);
  if (p_thread->joinable()) p_thread->join();
  delete p_thread;
  // printf("destructor USART\n");
}

uint32_t Usart::Down (const char * data, const uint32_t len) {
  uint32_t r = ::write (STDOUT_FILENO, data, len);
  ::syncfs (STDOUT_FILENO);
  return r;
}
