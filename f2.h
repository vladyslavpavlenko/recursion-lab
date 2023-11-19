//
// Created by admin on 19.11.2023.
//

#define COUNT_CALLS_F2

#ifdef COUNT_CALLS_F2
int callCount_f2 = 0;
#endif

int f2(int n) {
#ifdef COUNT_CALLS_F2

    callCount_f2++;
#endif

    // Base case
    if (n <= 0) {
        return 0;
    }

    // Recursive call
    return ;
}