#ifndef RECURSIONLAB_FUNCTIONS_H
#define RECURSIONLAB_FUNCTIONS_H

#include <thread>
#include <future>

constexpr int SLEEP_LOWER_BOUND = 100;
constexpr int SLEEP_UPPER_BOUND = 1000;

int f1(int);
int f2(int);
int f3(int);
int f4(int);

constexpr int (*functions[])(int) = {f1, f2, f3, f4};

#endif //RECURSIONLAB_FUNCTIONS_H