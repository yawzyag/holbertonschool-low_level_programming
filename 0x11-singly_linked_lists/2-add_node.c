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
 * add_node - print nodes size
 * @head: node
 * @str: string
 *
 * Return: number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *) malloc(sizeof(list_t));

	if (!new_node)
		return (0);
	if(str)
	{
		new_node->str = strdup(str);
		new_node->len = _strlen(new_node->str);
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		return(0);
	}

	return (*head);
}
