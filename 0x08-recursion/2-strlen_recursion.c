#include "main.h"

/**
  * _strlen_recursion - Function that return the lenght of a string
  * @s: pointer to a string
  * Calculating the lenght of a string
  * Return: char s
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
