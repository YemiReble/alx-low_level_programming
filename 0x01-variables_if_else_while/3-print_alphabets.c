#include <stdio.h>
#include <ctype.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int k;

	for (k = 'a'; k <= 'z'; k++)
	{
		putchar(k);
	}
		putchar('\n');

	for (k = 'A'; k <= 'Z'; k++)
	{
		putchar (k);
	}
		putchar('\n');

	return (0);
}
