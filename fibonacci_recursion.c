#include <stdio.h>

// Function to calculate the nth Fibonacci number using recursion
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Function to print the Fibonacci sequence up to a given limit
void printFibonacciSequence(int limit) {
    for (int i = 0; i < limit; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int limit;

    // Get the limit for the Fibonacci sequence from the user
    printf("Enter the limit for the Fibonacci sequence: ");
    scanf("%d", &limit);

    // Print the Fibonacci sequence up to the given limit
    printf("Fibonacci Sequence up to %d terms:\n", limit);
    printFibonacciSequence(limit);

    return 0;
}
