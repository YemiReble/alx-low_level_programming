#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the
 * end of a listint_t list.
 * @head: pointter to linked lists
 * @n: the integer to return to stdout
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endNode;
	listint_t *new = *head;

	endNode = malloc(sizeof(listint_t));
	if (endNode == NULL)
		printf("NULL\n");

	endNode->n = n;
	endNode->next = NULL;
	if (*head == NULL)
		*head = endNode;
	else
	{
		while (new->next != NULL)
		{
			new = new->next;
		}
	new->next = endNode;
	}
	return (*head);
}
