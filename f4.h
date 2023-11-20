#ifndef F4_H
#define F4_H

#include "utils.h"
#include "functions.h"

#define COUNT_CALLS_F4

#ifdef COUNT_CALLS_F4
extern int callCount_f4;
#endif

int f4(int);

#endif // F4_H