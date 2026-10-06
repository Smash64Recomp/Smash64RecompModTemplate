#ifndef DUMMY_FTCHAR_H
#define DUMMY_FTCHAR_H

// The character headers declare arrays of FTStatusDesc and FTMotionDesc, which fttypes.h only defines after including them.
#define FTStatusDesc FTStatusDesc*
#define FTMotionDesc FTMotionDesc*
#include_next <ft/ftchar.h>
#undef FTStatusDesc
#undef FTMotionDesc

#endif
