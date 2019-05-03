#include "lists.h"

/**
 * free_dlistint - free nodes
 *@head: node
 *
 * Return: 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (!head)
		return;
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
