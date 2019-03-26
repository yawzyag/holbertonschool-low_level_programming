#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current_node;

	if (!head)
		return (0);
	new_node = (listint_t*)malloc(sizeof(listint_t));
	if (!new_node)
		return (0);
	new_node->n = n;
	
	if (*head == NULL) {
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}

	if (idx == 0) {
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current_node = *head;
	while (idx - 1 > 0) {
		if(!current_node)
		{
			free (new_node);
			return (0);
		}
		current_node = current_node->next;
		idx--;
	}

	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
