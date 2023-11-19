//
// Created by admin on 19.11.2023.
//

#include <random>
int getRandomNumber() {
    std::random_device rd;
    std::mt19937 gen(rd());

    // Define the range for the random integer
    int lower_bound = 0;
    int upper_bound = 3;

    // Create a uniform distribution for the range
    std::uniform_int_distribution<int> distribution(lower_bound, upper_bound);

    // Generate a random integer
    int random_number = distribution(gen);
    return random_number;
}