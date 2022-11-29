#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of
 * a listint_t linked list.
 * @head: pointer to linked lists
 * @index: data value stored in the node
 *
 * Return: nth
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t count = 0;

	for (count = 0; (count < index) && (head->next); count++)
		head = head->next;

	if (count < index)
		return (NULL);
	return (head);
}
