/* main.c */

#include <stdio.h>  // Include the necessary header for standard I/O

#include "main.h"

/* Function to print a single character */
int _putchar(char c)
{
    return putchar(c);  // Use the standard putchar function from <stdio.h>
}

/* Function to print a number */
void print_number(int n)
{
    printf("%d", n);  // Use the printf function from <stdio.h> to print the number
}

/* Main function */
int main(void)
{
    print_number(98);
    _putchar('\n');
    print_number(402);
    _putchar('\n');
    print_number(1024);
    _putchar('\n');
    print_number(0);
    _putchar('\n');
    print_number(-98);
    _putchar('\n');
    return 0;
}

