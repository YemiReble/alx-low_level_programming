#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
  * isNumber - Cheking the condition of argument valuse
  * @str: Pointer to holds numubers
  * Return: nothing
  */

int isNumber(char *str)
{
	int j = strlen(str);

	while (j--)
	{
		if (str[j] > 47 && str[j] < 58)
			continue;
		return (0);
	}

	return (1);
}


/**
  * main - This is a program that prints its name, followed by a new line
  * @argc: being the variable that prints the number of argument pass
  * @argv: being the pointer array that prints the characters received by
  * this programe.
  * Return: arguments.
  */

int main(int argc, char *argv[])
{
	int i, sum = 0, count = 0;

	if (argc - 1 > 0)
	{
		for (i = 1; i < argc; ++i)
		{
			if (!isNumber(argv[i]))
				++count;
			else
				sum += atoi(argv[i]);
		}
	}
	if (argc - 1 == 0 || count == argc - 1)
		printf("0\n");

	else if (count > 0)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", sum);

	return (0);
}
