#include "lists.h"

/**
  * add_node - function that prints all the elements of a list_t list.
  * @head: pointer to nodes
  * @str: pointer to Linked_list
  *
  * Return: the addres of the new element
  */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int lenght = 0;
	list_t *new;

	while (str[lenght++])
		;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = --lenght;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
