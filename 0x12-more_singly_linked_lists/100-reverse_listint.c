#include "lists.h"

/**
 * reverse_listint - reverse list
 * @head: head
 *
 * Return: head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node, *curr_node;

	if (!head || !*head)
		return (0);

	if (*head)
	{
		prev_node = *head;
		curr_node = (*head)->next;
		*head = (*head)->next;
		prev_node->next = NULL;

		while (*head)
		{
			*head = (*head)->next;
			curr_node->next = prev_node;
			prev_node = curr_node;
			curr_node = *head;
		}
		*head = prev_node;
	}
	return (*head);
}
