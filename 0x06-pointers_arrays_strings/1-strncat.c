#include "main.h"
#include <string.h>

/**
  * _strncat - function that concatenates two strings
  * @dest: being the destination
  * @src: being the source
  * @n: an integer for less. lol :)
  * Return: dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int m, y;

	m = 0;
	y = 0;

	while (*(dest + m) != '\0')
	{
		m++;
	}

	while (y < n)
	{
		*(dest + m) += *(src + y);

		if (*(src + y) == '\0')
			break;
		m++;
		y++;
	}

	return (dest);
}
