#include "main.h"

/**
  * print_rev - prints a string, in reverse, followed by a new l0ine.
  * @s: input string
  * Return: vois.
  */

void print_rev(char *s)
{
	int L = 0;
	int i;

	while (s[L] != '\0')
		L++;

	for (i = L - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
