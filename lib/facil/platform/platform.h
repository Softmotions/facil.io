#ifndef H_PLATFORM_H
#define H_PLATFORM_H

#include <stdint.h>
#include <stddef.h>

#ifdef _WIN32
#include <windows.h>
#define INVALIDHANDLE(_HNDL) \
  (((_HNDL) == INVALID_HANDLE_VALUE) || (_HNDL) == NULL)
#else
typedef int HANDLE;
#define INVALID_HANDLE_VALUE (-1)
#define INVALIDHANDLE(_HNDL) ((_HNDL) < 0 || (_HNDL) == UINT16_MAX)
#endif

#ifndef _WIN32
#include <signal.h>
#else
//fixme: win
#define kill(pid_, sig_)
#endif

#endif