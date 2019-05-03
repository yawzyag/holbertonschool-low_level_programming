#include "lists.h"

/**
 * print_dlistint - print all nodes
 * @h: node
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int counter;

	if (!h)
		return (0);
	for (counter = 0; h; counter++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (counter);
}
