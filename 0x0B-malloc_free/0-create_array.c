#include "main.h"
#include <stdlib.h>

/**
  * create_array - a function that creates an array of chars, and
  * initializes it with a specific char
  * @size: being the vaariable that hold the size of memory (98)
  * @c: the character or variable 'H'
  * Return: a
  */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = malloc((size + 1) * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}

	i = 0;

	while (i < size)
	{
		a[i] = c;
		i++;
	}
	a[i] = '\0';

	return (a);
}
