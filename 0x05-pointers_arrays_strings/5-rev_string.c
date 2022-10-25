#include "main.h"

/**
 * rev_string - Reversing string
 * @s: Being the pointer
 * Return: void
 */

void rev_string(char *s)
{
	int a, b, c;
	char m;

	for (a = 0; s[a] != '\0'; a++)
		
	c = a;
	for (a--, b = 0; b < c / 2; a--, b++)
	{
		m = s[b];
		s[b] = s[a];
		s[a] = m;
	}
}
