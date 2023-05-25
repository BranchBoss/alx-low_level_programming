#include "main.h"

/**
  * _isdigit - a function that checks for a digit (0 through 9).
  * @c: input character.
  * Return: 1 if c is upperclass or 0 if c is lowerclass.
  */

int _isdigit(int c)
{
	char i;
	int isdigit = 0;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
		{
			isdigit = 1;
			break;
		}
	}
	return (isdigit);
}
