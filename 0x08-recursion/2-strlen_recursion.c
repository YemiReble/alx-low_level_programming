#include "main.h"

/**
  * _strlen_recursion - Function that return the lenght of a string
  * @c: pointer to a string
  * Calculating the lenght of a string
  * Return: 
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return 0;
	else
	{
		return 1 + _strlen_recursion(s + 1);
	}
}
