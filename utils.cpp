#include "utils.h"

int getRandomNumber(int lower_bound, int upper_bound ) {
    // Create a random device and seed it
    std::random_device rd;
    std::mt19937 gen(rd());

    // Create a uniform distribution for the range
    std::uniform_int_distribution<int> distribution(lower_bound, upper_bound);

    // Return a random integer
    return distribution(gen);
}