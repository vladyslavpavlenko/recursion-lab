#ifndef F2_H
#define F2_H

#include "utils.h"
#include "functions.h"

#define COUNT_CALLS_F2

#ifdef COUNT_CALLS_F2
extern int callCount_f2;
#endif

int f2(int n);

#endif // F2_H