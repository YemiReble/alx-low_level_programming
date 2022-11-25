#include "lists.h"

/**
  * add_node_end - function that adds a new node at the end of a list_t list.
  * @head: pointer to nodes
  * @str: pointer to Linked_list
  *
  * Return: the address of the new element, or NULL if it failed
  */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int lenght = 0;
	list_t *new;
	list_t *lastNode = *head;

	while (str[lenght++])
		;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = --lenght;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	/*Checking if otherwise. With the above code, I was only able\
	  to generate one name :(*/
	else
	{
		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = new;
	}
	return (*head);
}
