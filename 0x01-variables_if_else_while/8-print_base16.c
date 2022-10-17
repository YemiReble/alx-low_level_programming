#include <stdio.h>
#include <ctype.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*
*/

int main(void)
{
	int m;

	for (m = '0'; m <= '9'; m++)
	{
		putchar (m);
	}

	for (m = 'a'; m <= 'f'; m++)
	{
		putchar (m);
	}

	putchar ('\n');

	return (0);
}
