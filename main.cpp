#include <iostream>
#include <cstdlib>
#include <syncstream>
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

    std::osyncstream(std::cout) << "The value of N is: " << N << std::endl << std::endl << std::endl;

    int res = 0;

    // Run f1 in a separate thread
    std::future<int> ret = std::async(f1, N);
    res = ret.get();

    std::osyncstream(std::cout) << "f1() result: " << res  << std::endl << std::endl;

    std::osyncstream(std::cout) << "f1(): " << callCount_f1 << std::endl;
    std::osyncstream(std::cout) << "f2(): " << callCount_f2 << std::endl;
    std::osyncstream(std::cout) << "f3(): " << callCount_f3 << std::endl;
    std::osyncstream(std::cout) << "f4(): " << callCount_f4 << std::endl;
    std::osyncstream(std::cout) << std::endl;

    return 0;
}