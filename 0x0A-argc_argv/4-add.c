#include <stdio.h>
#include <stdlib.h>

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
	int add;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
