#ifndef C42A7A9F_B76E_408D_8051_A31C0C3542BD
#define C42A7A9F_B76E_408D_8051_A31C0C3542BD
#define T_DIR 1  // Directory
#define T_FILE 2 // File
#define T_DEV 3  // Device

#include "types.h"

struct stat {
  short type;    // Type of file
  int dev;       // File system's disk device
  uint32_t ino;  // Inode number
  short nlink;   // Number of links to file
  uint32_t size; // Size of file in bytes
};

#endif /* C42A7A9F_B76E_408D_8051_A31C0C3542BD */
