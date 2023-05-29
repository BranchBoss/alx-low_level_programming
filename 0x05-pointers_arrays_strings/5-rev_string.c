#include "main.h"

/**
  * rev_string - reverses a string.
  * @s: input string
  * Return: void.
  */

void rev_string(char *s)
{
	int L = 0;
	int i;
	char temp;

	while (s[L] != '\0')
		L++;

	for (i = 0; i < L / 2; i++)
	{
		temp = s[i];
		s[i] = s[L - i - 1];
		s[L - i - 1] = temp;
	}
}
