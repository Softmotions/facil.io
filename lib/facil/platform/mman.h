#ifndef H_MMAN_H
#define H_MMAN_H

#ifdef _WIN32
#include "win32/mman.h"
#else
#include <sys/mman.h>
#endif

#endif