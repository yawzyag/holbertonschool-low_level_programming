#include "lists.h"

/**
 * sum_of_nodes - sum all nodes
 * @head: node
 * @sum: sum
 *
 * Return: void
 */
void sum_of_nodes(listint_t *head, int *sum)
{
	if (!head)
		return;
	sum_of_nodes(head->next, sum);
	*sum = *sum + head->n;
}

/**
 * sum_listint - print nodes size
 * @head: node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	sum_of_nodes(head, &sum);

	return (sum);
}
