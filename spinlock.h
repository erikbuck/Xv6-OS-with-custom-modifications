// Mutual exclusion lock.

#ifndef B5E79D45_D2F7_4352_83DA_DED30AC163C4
#define B5E79D45_D2F7_4352_83DA_DED30AC163C4
#include "types.h"

struct spinlock {
  uint32_t locked; // Is the lock held?

  // For debugging:
  char *name;       // Name of lock.
  struct cpu *cpu;  // The cpu holding the lock.
  uint32_t pcs[10]; // The call stack (an array of program counters)
                    // that locked the lock.
};

#endif /* B5E79D45_D2F7_4352_83DA_DED30AC163C4 */
