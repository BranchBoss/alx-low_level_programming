#include <stdio.h>

void print_fibonacci_sequence(int n) {
    int prev = 1;
    int curr = 2;

    printf("1, 2"); // Print the first two Fibonacci numbers

    for (int i = 3; i <= n; i++) {
        int next = prev + curr;
        printf(", %d", next);
        prev = curr;
        curr = next;
    }
}

int main(void) {
    print_fibonacci_sequence(98);
    printf("\n");

    return 0;
}

