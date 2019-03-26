#include "lists.h"

/**
 * pop_listint - free head
 *@head: node
 *
 * Return: num
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *next_node = NULL;

	if (!*head || !head)
		return (0);

	next_node = (*head)->next;
	num = (*head)->n;
	free(*head);
	*head = next_node;

	return (num);
}
