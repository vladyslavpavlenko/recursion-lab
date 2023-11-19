//
// Created by admin on 19.11.2023.
//
#define COUNT_CALLS_F4

#ifdef COUNT_CALLS_F4
int callCount_f4 = 0;
#endif

int f4(int n) {
#ifdef COUNT_CALLS_F4
    callCount_f4++;
#endif

    // Base case
    if (n <= 0) {
        return 0;
    }

    // Recursive call
    return ;
}