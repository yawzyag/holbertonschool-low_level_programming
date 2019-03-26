#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (!head)
		return (0);
	if (count == index)
		return (head);

	return (get_nodeint_at_index(head->next, index-1));
}
