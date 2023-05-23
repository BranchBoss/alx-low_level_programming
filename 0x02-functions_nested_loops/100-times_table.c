#include <stdio.h>

void print_times_table(int n) {
    if (n < 0 || n > 15) {
        return;  // If n is out of range, do not print anything
    }
    
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            int result = i * j;
            printf("%4d", result);  // Adjust the width as needed
        }
        printf("\n");
    }
}

