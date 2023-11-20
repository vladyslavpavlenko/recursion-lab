#include "f1.h"

#ifdef COUNT_CALLS_F1
int callCount_f1 = 0;
#endif

int f1(int n) {
#ifdef COUNT_CALLS_F1
    callCount_f1++;
#endif

    // syncOut("f1 is called\n");
    std::cout << "f1 is called" << std::endl;

    // Base case
    if (n <= 0) {
        return 0;
    }

    // Select a random function
    int rand = getRandomNumber(1, 4);
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

    rand = getRandomNumber(1, 4);
    int res2 = 0;

    switch (rand) {
        case 1:
            res2 = f1(n/3);
            break;
        case 2:
            res2 = f2(n/3);
            break;
        case 3:
            res2 = f3(n/3);
            break;
        case 4:
            res2 = f4(n/3);
            break;
    }

    return res1 + res2;
}