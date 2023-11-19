#include <random>

int getRandomNumber() {
    // Create a random device and seed it
    std::random_device rd;
    std::mt19937 gen(rd());

    // Define the range for the random integer
    int lower_bound = 1;
    int upper_bound = 4;

    // Create a uniform distribution for the range
    std::uniform_int_distribution<int> distribution(lower_bound, upper_bound);

    // Return a random integer
    return distribution(gen);
}