#ifndef F1_H
#define F1_H

#include "utils.h"
#include "functions.h"

#define COUNT_CALLS_F1

#ifdef COUNT_CALLS_F1
extern int callCount_f1;
#endif

int f1(int);

#endif // F1_H