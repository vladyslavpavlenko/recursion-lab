//
// Created by admin on 19.11.2023.
//

#define COUNT_CALLS_F1
#define COUNT_CALLS_F2
#define COUNT_CALLS_F3
#define COUNT_CALLS_F4


// Function to count calls
int f1(int n, int &callCount) {
#ifdef COUNT_CALLS_F1

    callCount++;
#endif

    // Base case
    if (n <= 0) {
        return 0;
    }

    // Recursive call
    return f2()+f3();
}