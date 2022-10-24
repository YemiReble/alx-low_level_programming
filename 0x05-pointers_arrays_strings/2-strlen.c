#include "main.h"

/**
 * _strlen - Count the lenght of string, "string lenght"
 * @s: being the pointer.
 * The str holding the initial string character
 * The len returning the lenght of the string
 * Description: _strlen
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
