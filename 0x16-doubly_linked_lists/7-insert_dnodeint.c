#include "lists.h"

/**
 * insert_dnodeint_at_index - print all nodes
 * @h: node
 * @idx: pos
 * @n: new data
 *
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current_node;

	if (!h)
		return (0);
	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new_node)
		return (0);
	new_node->n = n;
	if (*h == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));

	current_node = *h;
	while (idx - 1 > 0)
	{
		if (!current_node)
		{
			free(new_node);
			return (0);
		}
		current_node = current_node->next;
		idx--;
	}
	if (!current_node->next)
		return (add_dnodeint_end(h, n));

	new_node->next = current_node->next;
	current_node->next->prev = new_node;
	current_node->next = new_node;
	new_node->prev = current_node;
	return (new_node);
}
