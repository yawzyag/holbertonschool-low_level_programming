#include "lists.h"

/**
 * add_nodeint_end - add node at the end
 * @head: node
 * @n: string
 *
 * Return: number of nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *reference;
	listint_t *new_node;

	if (!head)
		return(0);
	
	new_node = (listint_t *) malloc(sizeof(listint_t));

	if (!new_node)
		return (0);
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		*head = new_node;
		return (*head);
	}
	reference = *head;
	while (reference->next)
		reference = reference->next;
	reference->next = new_node;

	return (new_node);
}
