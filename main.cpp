#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <integer N>" << std::endl;
        return 1;
    }

    const int N = std::atoi(argv[1]);

    std::cout << "The value of N is: " << N << std::endl;

    return 0;
}