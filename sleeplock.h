// Long-term locks for processes

#ifndef BD0EC60C_DBDC_45B6_BDFB_2912E5B8A73E
#define BD0EC60C_DBDC_45B6_BDFB_2912E5B8A73E
#include "spinlock.h"

struct sleeplock {
  uint32_t locked;    // Is the lock held?
  struct spinlock lk; // spinlock protecting this sleep lock

  // For debugging:
  char *name; // Name of lock.
  int pid;    // Process holding lock
};

#endif /* BD0EC60C_DBDC_45B6_BDFB_2912E5B8A73E */
