#include "lists.h"

/**
 * listint_len - function that returns the number of element in a list.
 * @h: pointter to linked lists
 *
 * Return: the numbers of elements in a linked lists
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
