//
// Created by admin on 19.11.2023.
//
#define COUNT_CALLS_F3

#ifdef COUNT_CALLS_F3
int callCount_f3 = 0;
#endif

int f3(int n) {
#ifdef COUNT_CALLS_F3

    callCount_f3++;
#endif

    // Base case
    if (n <= 0) {
        return 0;
    }

    // Recursive call
    return ;
}