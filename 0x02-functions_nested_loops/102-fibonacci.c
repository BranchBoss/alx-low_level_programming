#include <stdio.h>

int main(void) {
    int fib[50];  // Array to store Fibonacci numbers

    // Initialize the first two Fibonacci numbers
    fib[0] = 1;
    fib[1] = 2;

    // Compute the remaining Fibonacci numbers
    for (int i = 2; i < 50; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Print the Fibonacci numbers separated by comma and space
    for (int i = 0; i < 50; i++) {
        printf("%d", fib[i]);
        if (i != 49) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}

