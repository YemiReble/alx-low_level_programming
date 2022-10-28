#include "main.h"

/**
  * _strcat - Concatinating two Strings to one sentence.
  * @dest: Destination pointer
  * @src: Source pointer
  * Return: dest
  */

char *_strcat(char *dest, char *src)
{
	int m, n;

	m = 0;
	n = 0;

	while (*(dest + m) != '\0')
	{
	m++;
	}

	while (n >= 0)
	{
		*(dest + m) += *(src + n);

		if (*(src + n) == '\0')
			break;

		m++;
		n++;
	}

	return (dest);
}
