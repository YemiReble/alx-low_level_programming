#include <stdlib.h>
#include <stdio.h>

/**
  * main - This is a program that prints its name, followed by a new line
  * @argc: being the variable that prints the number of argument pass
  * @argv: being the pointer array that prints the characters received by
  * this programe.
  * Return: arguments.
  */

int main(int argc, char *argv[])
{
	int i;

	int result = 1;

	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}
		for (i = 1; i < argc; i++)
		{
			int mul = strtol(argv[i], NULL, 10);

			result = result * mul;
		}
		printf("%d\n", result);

		return (0);
}
