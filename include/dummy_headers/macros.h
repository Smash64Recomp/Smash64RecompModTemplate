#ifndef DUMMY_MACROS_H
#define DUMMY_MACROS_H

#include_next <macros.h>

#ifdef __attribute__
#undef __attribute__
#endif

#endif