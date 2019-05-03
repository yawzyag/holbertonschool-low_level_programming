#include "lists.h"

/**
 * add_dnodeint - add node at the begginning
 * @head: node
 * @n: integer
 *
 * Return: addres of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *aux;

	if (!head)
		return (0);

	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (!new_node)
		return (0);
	aux = *head;
	new_node->n = n;
	new_node->next = aux;
	new_node->prev = NULL;
	if(aux)
		aux->prev = new_node;
	aux = new_node;

	return (new_node);
}
