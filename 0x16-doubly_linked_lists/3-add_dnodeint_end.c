#include "lists.h"

/**
 * add_dnodeint_end - add node at the end
 * @head: node
 * @n: string
 *
 * Return: number of nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *reference;
	dlistint_t *new_node;

	if (!head)
		return (0);

	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (!new_node)
		return (0);
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}
	reference = *head;
	while (reference->next)
		reference = reference->next;
	reference->next = new_node;
	new_node->prev = reference;

	return (new_node);
}
