#include "lists.h"

/**
 * free_list - free nodes
 *@head: node
 *
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
