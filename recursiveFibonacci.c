#include "lab3.h"

// This function finds and returns the nth
// Fibonacci number using recursion

int recursiveFibonacci(int n) {

   if((n == 1)||(n == 0)) {
      return(n);
   }

   else {
      return(recursiveFibonacci(n - 1) + recursiveFibonacci(n - 2));
   }
}