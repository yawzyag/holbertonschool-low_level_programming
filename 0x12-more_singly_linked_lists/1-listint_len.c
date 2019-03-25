#include "lists.h"

/**
 * listint_len - number of nodes
 * @h: node
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
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
