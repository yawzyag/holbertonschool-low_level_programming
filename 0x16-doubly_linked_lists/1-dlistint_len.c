#include "lists.h"

/**
 * dlistint_len - number of nodes
 * @h: node
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter;

	if (!h)
		return (0);
	for (counter = 0; h; counter++)
	{
		h = h->next;
	}
	return (counter);
}
