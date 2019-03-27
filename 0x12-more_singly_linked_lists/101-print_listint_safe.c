#include "lists.h"

/**
 * print_listint_safe - print even if have a loop
 * @head: node head
 * Return: count
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	int count, check;

	slow = head;
	count = 0;
	while (slow)
	{
		fast = head;
		check = 0;
		while (count > check)
		{
			if (slow == fast)
			{
				printf("-> [%p] %d\n", (void *)slow, slow->n);
				return (count);
			}
			fast = fast->next;
			check++;
		}
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		count++;
	}
	return (count);
}
