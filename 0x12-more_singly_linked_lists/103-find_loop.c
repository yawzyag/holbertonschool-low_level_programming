#include "lists.h"

/**
 * find_listint_loop - finds loop inside single list
 * @head: node head
 * Return: node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (!head)
	{
		return (0);
	}
	else
	{
		slow = head->next;
		fast = head->next->next;
		while (slow && fast)
		{
			if (slow == fast)
			{
				slow = head;
				while (slow != fast)
				{
					slow = slow->next;
					fast = fast->next;
				}
				return (slow);
			}
			slow = slow->next;
			fast = fast->next->next;
		}
	}
	return (0);
}
