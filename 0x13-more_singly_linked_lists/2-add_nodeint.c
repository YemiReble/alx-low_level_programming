#include "lists.h"

/**
 * add_nodesint - function that adds a new node at the 
 * beginning of a listint_t list.
 * @head: pointter to linked lists
 * @n: 
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		printf("NULL\n");

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
