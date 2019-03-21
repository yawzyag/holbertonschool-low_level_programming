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
	const list_t *p = h;

	if (!p)
		return (0);
	while (p)
	{
		if (p->str)
		{
			printf("[%d] %s\n", p->len, p->str);
			p = p->next;
		}
		else
		{
			printf("[0] %p\n", p->str);
			p = p->next;
		}
		counter++;
	}
	return (counter);
}
