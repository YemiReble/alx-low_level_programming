#include "main.h"

/**
  * puts_half - print half of strings
  * @str: string pointer
  * Return: void
  */

void puts_half(char *str)
{
	int m = 0;
	int l;

	while (str[m] != '\0')
	{
		m++;
	}

	if (m % 2 == 1)
	{
		l = (m -1) / 2;
		l += 1;
	}

	else
	{
		l = m /2;
	}

	for (; l < m; l++)
	{
		putchar(str[l]);
	}

	putchar('\n');
}
