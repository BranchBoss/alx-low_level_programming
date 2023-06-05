#include "main.h"

/**
  * _memset - a function that fills memory with a constant byte.
  * @s: points to the memory area to fill.
  * @b: char to fill the memory area with.
  * @n: number of bytes of the memory area to fill.
  * Return: pointer to the filled area.
  */

char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
