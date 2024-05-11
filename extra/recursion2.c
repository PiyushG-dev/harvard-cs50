#include <stdio.h>

// Recursive factorial function
int factorialRecursive(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0) {
        return 1;
    }
    // Recursive case: n! = n * (n-1)!
    else {
        return n * factorialRecursive(n - 1);
    }
}

// Iterative factorial function
int factorialIterative(int n) {
    int result = 1;
    // Multiply numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n = 5; // Example input
    
    // Calculate factorial recursively
    int recursiveResult = factorialRecursive(n);
    printf("Factorial of %d (Recursive): %d\n", n, recursiveResult);
    
    // Calculate factorial iteratively
    int iterativeResult = factorialIterative(n);
    printf("Factorial of %d (Iterative): %d\n", n, iterativeResult);
    
    return 0;
}
