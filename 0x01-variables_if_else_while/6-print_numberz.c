#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*
*/

int main(void)
{
	char numb = '0';
	
	for (numb = '0'; numb <= '9'; numb++)
	{
		putchar(numb);
	}
	putchar('\n');

	return (0);
}
