#include "lists.h"

/**
 * free_listint2 - free nodes
 * @head: node
 *
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
		return;
	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
