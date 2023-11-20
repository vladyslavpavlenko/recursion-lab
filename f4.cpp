#include "f4.h"

#ifdef COUNT_CALLS_F4
int callCount_f4 = 0;
#endif

int f4(int n) {
#ifdef COUNT_CALLS_F4
    callCount_f4++;
#endif

    // Print thread id and debug message
    std::thread::id this_id = std::this_thread::get_id();
    std::osyncstream(std::cout) << "[" << this_id << "] f4() is called\n";

    // Base case
    if (n <= 0) {
        return 0;
    }

    // Sleep thread for a random time
    std::this_thread::sleep_for(std::chrono::milliseconds(getRandomNumber(SLEEP_LOWER_BOUND, SLEEP_UPPER_BOUND)));

    // Run a first random function in a separate thread
    int rand = getRandomNumber(1, 4);
    int res1 = 0;

    std::future<int> ret = std::async(functions[rand-1], n-1);
    res1 = ret.get();

    // std::osyncstream(std::cout) << "[" << this_id << "] f4 returns " << res1 << " from f" << rand-1 << "(" << n-1 << ")\n";

    // Run a second random function in a separate thread
    rand = getRandomNumber(1, 4);
    int res2 = 0;

    ret = std::async(functions[rand-1], n/3);
    res2 = ret.get();

    // std::osyncstream(std::cout) << "[" << this_id << "] f4 returns " << res1 << " from f" << rand-1 << "(" << n-1 << ")\n";

    return res1 + res2;
}