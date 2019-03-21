#include "lists.h"

/**
 * print_list - print all nodes
 * @h: node
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int counter = 0;

	if (!h)
		return (0);
	while (h)
	{
		if (h->str)
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		else
		{
			printf("[0] %p\n", h->str);
			h = h->next;
		}
		counter++;
	}
	return (counter);
}
