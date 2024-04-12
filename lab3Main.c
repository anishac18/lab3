#include "lab3.h"
int main() {
    int n;
    printf("\nEnter an input value: ");
    scanf("%d", &n);

    double timeElapsed = 0.0;
    clock_t begin, end;
    begin = clock();

    int rFib = recursiveFibonacci(n); // first function

    end = clock();
    timeElapsed += (double)(end-begin) / CLOCKS_PER_SEC;
    printf("\nTime Elapsed for recursive fibonacci is %lf seconds", timeElapsed);

    timeElapsed = 0.0;
    begin = 0, end = 0;
    begin = clock();

    int iFib = iterativeFibonacci(n); // second function

    end = clock();
    timeElapsed += (double)(end-begin) / CLOCKS_PER_SEC;
    printf("\nTime Elapsed for iterative fibonacci is %lf seconds", timeElapsed);

    timeElapsed = 0.0;
    begin = 0, end = 0;
    begin = clock();

    int iSum = iterativeSumNOdd(n); // third function

    end = clock();
    timeElapsed += (double)(end-begin) / CLOCKS_PER_SEC;
    printf("\nTime Elapsed for iterative sum is %lf seconds", timeElapsed);

    timeElapsed = 0.0;
    begin = 0, end = 0;
    begin = clock();

    int rSum = recursiveSumNOdd(n); // fourth function
    end = clock();
    timeElapsed += (double)(end-begin) / CLOCKS_PER_SEC;
    printf("\nTime Elapsed for recursive sum is %lf seconds\n", timeElapsed);




    // Output the results and execution times
    printf("*************\n");

    // Output the sum of the first n odd numbers using 
    // both iterative and recursive approaches

    printf("Sum of");
    for (int i = 1; i <= 2*n-1; i += 2) {
        printf(" %d", i);
        if (i < 2*n-1) {
            printf(" +");
        }
    }
   // Output the results and execution times
// Print the sum of the first n odd integers computed iteratively and recursively, along with the time elapsed for each computation

printf("\n");
printf("Using iteration = %d\n", iSum );
// printf("Time elapsed for iterative sum is %lf seconds\n", timeElapsed3);
printf("Using recursion = %d\n", rSum);
// printf("Time elapsed for recursive sum is %lf seconds\n", timeElapsed4);
      printf("*************\n");

// Print the nth Fibonacci number computed iteratively and recursively, along with the time elapsed for each computation

printf("Iteratively, Fibonacci (%d) = %d\n", n, iFib);
// printf("Time elapsed for iterative Fibonacci is %lf seconds\n", timeElapsed1);
printf("Recursively, Fibonacci (%d) = %d\n", n, rFib);
// printf("Time elapsed for recursive Fibonacci is %lf seconds\n", timeElapsed2);

printf("*************\n");
return 0;
}
