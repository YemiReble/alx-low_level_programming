#include "main.h"

/**
  * string_toupper - convert all lowercase letters
  * of a string to uppercase
  * @l: my personal assigned pointer
  * Return: char l
  */

char *string_toupper(char *l)
{
	int m = 0;

	while (*(l + m) != '\0')
	{
		if ((*(l + m) >= 97) && (*(l + m) <= 122))
			*(l + m) = *(l + m) - 32;
		m++;
	}

	return (l);
}
