#include "main.h"

/**
  * _strcmp - To compare two (2) strings
  * @s1: pointer to string 1
  * @s2: pointer to string 2
  * Return: value
  */

int _strcmp(char *s1, char *s2)
{
	int m, n;

	m = 0;
	n = 0;

	while (n == 0)
	{
		if ((*(s1 + m) == '\0') && (*(s2 + m) == '\0'))
			break;
		n = *(s1 + m) - *(s2 + m);
		m++;
	}

	return (n);
}
