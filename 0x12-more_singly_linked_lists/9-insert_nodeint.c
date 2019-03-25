#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = (listint_t*)malloc(sizeof(listint_t));
	listint_t *currentNode;

	if(!newNode)
		return (0);
	newNode->n = n;
	if (*head == NULL) {
		newNode->next = NULL;
		*head = newNode;
		return (newNode);
	}

	if (idx == 0) {
		newNode->next = *head;
		return (newNode);
	}

	currentNode = *head;
	while (idx - 1 > 0) {
		currentNode = currentNode->next;
		idx--;
		if(!currentNode->next)
			return (0);
	}

	newNode->next = currentNode->next;
	currentNode->next = newNode;

	return (*head);
}
