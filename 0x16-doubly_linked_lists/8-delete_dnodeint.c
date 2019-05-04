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
	dlistint_t *temp;

	if (!head || !*head)
		return (-1);
	temp = *head;
	if (!index)
	{
		*head = temp->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	for (i = 0; temp != NULL && i < index; i++)
		temp = temp->next;

	if (temp == NULL || temp->next == NULL)
		return (-1);
	temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;

	free(temp);
	return (1);
}
