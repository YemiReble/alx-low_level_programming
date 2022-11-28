#include "lists.h"

/**
 * free_listint - function that free allocated memories.
 * @head: pointter to linked lists
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *freenode;

	while (head)
	{
		freenode = head;
		head = head->next;
		free(freenode);
	}
}
