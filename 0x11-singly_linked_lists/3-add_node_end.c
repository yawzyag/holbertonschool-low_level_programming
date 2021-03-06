#include "lists.h"

/**
 * _strlen - show the length of string
 *@s: string
 *
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i);)
		i++;
	return (i);
}

/**
 * add_node_end - print nodes size
 * @head: node
 * @str: string
 *
 * Return: number of nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *reference;
	list_t *new_node = (list_t *) malloc(sizeof(list_t));

	if (!new_node)
		return (0);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (0);
	}
	new_node->len = _strlen(new_node->str);
	new_node->next = NULL;
	if (!*head)
	{
		*head = new_node;
		return (*head);
	}
	reference = *head;
	while (reference->next)
		reference = reference->next;
	reference->next = new_node;

	return (new_node);
}
