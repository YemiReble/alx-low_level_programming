#include "lists.h"

/**
  * print_list - function that prints all the elements of a list_t list
  * @head: Linked list pointer
  *
  * Return: notithing, just free some memory.
  */

void free_list(list_t *head)
{
	list_t *nodefree;

	while (head)
	{
		nodefree = head;
		head = head->next;
		free(nodefree->str);
		free(nodefree);
	}
}
