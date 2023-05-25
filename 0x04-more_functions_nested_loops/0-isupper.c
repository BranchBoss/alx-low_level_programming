#include "main.h"

/**
  * _isupper - a function that checks for uppercase character.
  * @c: input character.
  * Return: 1 if c is upperclass or 0 if c is lowerclass.
  */

int _isupper(int c)
{
	char i;
	int upper = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			upper = 1;
			break;
		}
	}
	return (upper);
}
