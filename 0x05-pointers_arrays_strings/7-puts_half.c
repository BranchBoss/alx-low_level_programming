#include "main.h"

/**
  * puts_half -  prints half of a string, followed by a new line.
  * The function should print the second half of the string
  *
  * @str: input string.
  * Return: void.
  */

void puts_half(char *str)
{
	int len = 0, i = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		i = len / 2;
		len -= 1;

		for (; i <= len; i++)
			_putchar(str[i]);
	}
	else
	{
		i = len - (len - 1) / 2;
		len -= 1;

		for (; i <= len; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
