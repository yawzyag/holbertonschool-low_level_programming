#include "lists.h"

/**
 * print_listint - print all nodes
 * @h: node
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int counter = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
