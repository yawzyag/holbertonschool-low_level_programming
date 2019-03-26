#include "lists.h"

/**
 * free_listint - free nodes
 *@head: node
 *
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (!head)
		return;
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
