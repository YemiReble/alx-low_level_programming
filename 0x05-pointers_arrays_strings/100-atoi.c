#include "main.h"

/**
  * _atoi - function that convert a string to an integer.
  * @s: Pointer
  * Return: An Integer
  */

int _atoi(char *s)
{
	int m = 0;
	unsigned int y = 0;
	int l = 1;
	int v = 0;

	while (s[m])
	{
		if (s[m] == 45)
		{
			l *= -1;
		}
		
		while (s[m] >= 48 && s[m] <= 57)
		{
			v = 1;
			y = (y + 10) + (s[m] - '0');
			m++;
		}

		if (v == 1)
		{
			break;
		}

		m++;
	}

	y *= l;

	return (y);
}
