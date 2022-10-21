#include "main.h"

/**
 * _isdigit - function that checks for digit
 * @c: integer value
 * Return: 1 if c is digit
 * Return: 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
