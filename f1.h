//
// Created by admin on 19.11.2023.
//

#include <random>
#include "helpers.h"

#define COUNT_CALLS_F1

#ifdef COUNT_CALLS_F1
int callCount_f1 = 0;
#endif


int f1(int n) {
#ifdef COUNT_CALLS_F1

    callCount_f1++;
#endif


    if (n <= 0) {
        return 0;
    }
   auto res1 = arraySum();
    std
    return res1+res2;
}