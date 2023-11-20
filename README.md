# Recursion Lab

The developers have developed 4 recursive functions (we are talking about indirect recursion) of type int, say, f1, f2, f3, and f4, which are planned to be used in a multithreaded program (and can make recursive and other calls in another thread).

During the acceptance tests, it is necessary to investigate how many times each function is called by f1(n) each function is called during its operation and prints the result. The number n is specified in the program call line.

The code that provides acceptance tests must either not change the functions f1, f2, f3, and f4, or be such that its parts can be easily removed when compiling these functions for production.

Develop the necessary tools and build prototypes of functions f1, f2, f3, f4 that simulate the work of functions to test your own code.

For the sake of demonstration, assume that each of the functions f1, f2, f3, f4 outputs the phrase "fn is called", sleeps a random small amount of time, and then randomly selects two functions, runs them with a smaller argument (for one, reduce by 1, for the other by a third) and returns the sum.