#include "lists.h"

/**
  * list_len - function that prints the lenght of elements of a list_t list
  * @h: pointer to elements
  *
  * Return: lenght of elements
  */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
