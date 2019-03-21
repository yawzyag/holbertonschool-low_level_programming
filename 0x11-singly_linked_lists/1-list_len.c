#include "lists.h"

/**
 * list_len - print nodes size
 * @h: node
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int counter = 0;

	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
