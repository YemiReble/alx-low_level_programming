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
	int m = 0;

	while (m < 10)
	{
		printf("%d", m);
		m = m + 1;
	}
	putchar('\n');		

	return (0);

}
