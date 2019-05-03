#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: node head
 * @index: index of node
 *
 * Return: number of nods
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (!head)
		return (0);
	if (count == index)
		return (head);

	return (get_dnodeint_at_index(head->next, index - 1));
}
