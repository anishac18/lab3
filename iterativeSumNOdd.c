#include "lab3.h"

// This function finds and returns the sum 
// of n odd numbers using iteration (i.e., using loops).
int iterativeSumNOdd(int n) {
    int sum = 0;
    int count = 0;
    int new = 1;

    while (count < n) {
        sum += new;
        new += 2;
        count++;
        // printf("Sum = %d\n", sum);
    }

    return sum;
}