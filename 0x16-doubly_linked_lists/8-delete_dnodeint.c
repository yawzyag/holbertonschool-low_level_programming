#include "lists.h"

/**
 * delete_nodeint_at_index - delete at index
 * @head: head of node
 * @index: index to delete
 *
 * Return: 1 if success -1 else
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *next, *temp;

	if (!head || !*head)
		return (-1);
	temp = *head;

	if (!index)
	{
		*head = temp->next;
		temp->prev = NULL;
		free(temp);
		return (1);
	}
	for (i = 0; temp != NULL && i < index - 1; i++)
		temp = temp->next;

	if (temp == NULL || temp->next == NULL)
		return (-1);
	next = temp->next->next;
	temp->next->prev = next;

	free(temp->next);

	temp->next = next;
	return (1);
}
