#include "lists.h"

/**
 * free_listint_safe - free even if have a loop
 * @h: node head
 * Return: count
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow, *fast, *tmp;
	int count, check;

	slow = *h;
	tmp = *h;
	count = 0;
	while (tmp)
	{
		fast = *h;
		check = 0;
		while (count > check)
		{
			if (slow == fast)
			{
				*h = NULL;
				return (count);
			}
			fast = fast->next;
			check++;
		}
		slow = tmp->next;
		free(tmp);
		tmp = slow;
		count++;
	}
	*h = NULL;
	return (count);
}
