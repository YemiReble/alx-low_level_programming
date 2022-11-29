#include "lists.h"

/**
 * pop_listint - function that deletes the head node of
 * a listint_t linked list.
 * @head: pointer pointer to linked lists
 *
 * Return: integer n
 */

int pop_listint(listint_t **head)
{
	listint_t *freenode;
	int i;

	freenode = *head;
	if (*head == NULL)
		return (0);
	{
		*head = (*head)->next;
		i = freenode->n;
		free(freenode);
	}
	return (i);
}
