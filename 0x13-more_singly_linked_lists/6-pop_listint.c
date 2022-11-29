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
	int key = 0;

	if ((*head)->n == key)
	{
		freenode = *head;
		*head = (*head)->next;
		key = freenode->n;
		free(freenode);
	}
	return (key);
}
