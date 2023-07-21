#include "main.h"
/**
 * is_palindrome - This is a function that check if a string is a
 * palindrome.
 * @s: string to check
 *
 * Return: Pal
 */
int is_palindrome(char *s)
{
	int len = strlen(s);
	char *reversed_str = (char *)malloc(sizeof(char) * len);
	int i, j;

	for (i = 0, j = len - 1; i < len; i++, j--)
	{
		reversed_str[i] = s[j];
	}

	for (i = 0; i < len; i++)
	{
		if (s[i] != reversed_str[i])
		{
			free(reversed_str);
			return (0);
		}
	}

	free(reversed_str);
	return (1);
}
