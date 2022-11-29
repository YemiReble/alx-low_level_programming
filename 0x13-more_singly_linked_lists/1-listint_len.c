#include "lists.h"

/**
 * listint_len - function that returns the number of element in a list.
 * @h: pointter to linked lists
 *
 * Return: the numbers of elements in a linked lists
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *tmp = h;
	size_t count = 0;

	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
