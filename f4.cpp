#include "f4.h"

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

    // Select a random function
    int rand = getRandomNumber();
    int res1 = 0;

    switch (rand) {
        case 1:
            res1 = f1(n-1);
            break;
        case 2:
            res1 = f2(n-1);
            break;
        case 3:
            res1 = f3(n-1);
            break;
        case 4:
            res1 = f4(n-1);
            break;
    }

    rand = getRandomNumber();
    int res2 = 0;

    switch (rand) {
        case 1:
            res1 = f1(n/3);
            break;
        case 2:
            res1 = f2(n/3);
            break;
        case 3:
            res1 = f3(n/3);
            break;
        case 4:
            res1 = f4(n/3);
            break;
    }

    return res1 + res2;
}