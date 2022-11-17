#include "function_pointers.h"

/**
  * print_name - A function that prints a name
  * @name: pointer to string name
  * @f: pointer to fuction
  *
  * Return: strings
  */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
