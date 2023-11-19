#ifndef F3_H
#define F3_H

#include "utils.h"
#include "functions.h"

#define COUNT_CALLS_F3

#ifdef COUNT_CALLS_F3
extern int callCount_f3;
#endif

int f3(int n);

#endif // F3_H