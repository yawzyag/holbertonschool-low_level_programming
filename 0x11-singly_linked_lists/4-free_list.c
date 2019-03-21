#include "lists.h"

/**
 * free_list - free nodes
 *@head: node
 *
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
