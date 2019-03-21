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
	const list_t *p = h;

	if (!p)
		return (0);
	while (p)
	{
		p = p->next;
		counter++;
	}
	return (counter);
}
