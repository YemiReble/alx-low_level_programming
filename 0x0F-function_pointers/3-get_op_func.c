#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * get_op_func - Function that get the correct code
  * @s: Pointer to the right source code
  *
  * Return: integer otherwise, Error
  */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	while (ops[i].op)
	{
		if (*s == *(ops[i].op) && *(s + 1) == '\0')
			return (ops[i].f);
		++i;
	}
	return (NULL);
}
