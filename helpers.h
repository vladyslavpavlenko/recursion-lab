//
// Created by admin on 19.11.2023.
//


#ifndef RECURSION_LAB_HELPERS_H
#define RECURSION_LAB_HELPERS_H

#include <functional>
#include "f1.h"
#include "f2.h"
#include "f3.h"
#include "f4.h"
std::function<int(int)> arraySum[4] = {f1, f2, f3,f4};
int getRandomNumber();
#endif //RECURSION_LAB_HELPERS_H
