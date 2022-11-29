#include "lists.h"

/**
 * free_listint2 - function that free allocated memories.
 * @head: pointer pointer to linked lists
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *freenode;

	while (*head)
	{
		freenode = (*head);
		(*head) = (*head)->next;
		free(freenode);
	}
}
