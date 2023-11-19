#include <iostream>
#include <cstdlib>
#include "functions.h"

extern int callCount_f1;
extern int callCount_f2;
extern int callCount_f3;
extern int callCount_f4;

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <integer N>" << std::endl;
        return 1;
    }

    const int N = std::atoi(argv[1]);

    std::cout << "The value of N is: " << N << std::endl << std::endl;

    std::cout << "main.cpp f1(N) = " <<  f1(N) << std::endl;
    std::cout << "f(1): " << callCount_f1 << std::endl;
    std::cout << "f(2): " << callCount_f2 << std::endl;
    std::cout << "f(3): " << callCount_f3 << std::endl;
    std::cout << "f(4): " << callCount_f4 << std::endl;
    std::cout << std::endl;

    return 0;
}