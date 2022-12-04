#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: pointer to linked lists
 *
 * Return: Always 0
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *tmp = h;
	size_t count = 0;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		count++;
		tmp = tmp->next;
	}
	return (count);
}
