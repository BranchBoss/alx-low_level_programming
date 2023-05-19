#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print numbers from 0 to 9 separated by commas
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);

		if (n < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	printf("\n");

	return (0);
}

