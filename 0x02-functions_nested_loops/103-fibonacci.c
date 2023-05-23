#include <stdio.h>

int main(void) {
    int prev = 1;
    int curr = 2;
    int sum = 2;

    while (curr <= 4000000) {
        int next = prev + curr;
        if (next % 2 == 0) {
            sum += next;
        }
        prev = curr;
        curr = next;
    }

    printf("The sum of even-valued terms in the Fibonacci sequence is: %d\n", sum);
    return 0;
}

