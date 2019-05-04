#include "lists.h"

/**
 * delete_dnodeint_at_index - delete at index
 * @head: head of node
 * @index: index to delete
 *
 * Return: 1 if success -1 else
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp;

	if (!head || !*head)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (!temp)
			return (-1);
		temp = temp->next;
	}
	temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;

	free(temp);
	return (1);
}
