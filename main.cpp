#include <iostream>
#include "f1.h"
#include "f2.h"
#include "f3.h"
#include "f4.h"
#include <cstdlib>
#include "helpers.h"




int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <integer N>" << std::endl;
        return 1;
    }

    const int N = std::atoi(argv[1]);

    std::cout << "The value of N is: " << N << std::endl;
    int count = 0;

    std::cout<< "The number of calls is: " << count << std::endl;
    return 0;
}