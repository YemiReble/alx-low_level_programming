#include "main.h"

/**
* _islower - Entry point
* Description: checks is a character is lowercase
* @c: the integer value it receives
* Return: 1 if true. 0 if false.
*/

int _islower(int c)
{
	int m = 'a';

	for (m = 'a'; m <= 'z'; m++)
	{
		if (c == m)
		{
			return (1);
		}
	}
	return (0);
}
