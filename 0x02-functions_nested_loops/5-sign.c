#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: input integer.
 *
 * Return: 1 if n > 0 , 0 if n = 0 and -1 if n > 0.
 */
int print_sign(int n)
{
	int re;

	if (n > 0)
	{
		re = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		re = 0;
		_putchar('0');
	}
	else
	{
		re = -1;
		_putchar('-');
	}
	return (re);
}
