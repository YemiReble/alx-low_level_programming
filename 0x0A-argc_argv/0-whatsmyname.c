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

	for (i = 0; i < argc; i++)
	{
		printf ("%s\n", argv[i]);
	}
	return (0);
}
