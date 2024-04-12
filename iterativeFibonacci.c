#include "lab3.h"
//  This function finds and returns the nth
// Fibonacci number using iteration (i.e., using loops).
int iterativeFibonacci(int n) {

    if (n < 0) {
        return -1;
    } else if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        int prev = 0;
        int curr = 1;
        int fib = 0;
        for (int i = 2; i <= n; i++) {
            fib = prev + curr;
            prev = curr;
            curr = fib;
        }
        return fib;
    }
}