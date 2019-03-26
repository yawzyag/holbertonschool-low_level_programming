#include "lists.h"

listint_t *reverse_listint(listint_t **head)
{
    listint_t *prev_node, *curr_node;

    if(!head || !*head)
        return (0);

    if (*head)
    {
        prev_node = *head;
        curr_node = (*head)->next;
        *head = (*head)->next;
        prev_node->next = NULL; // Make first node as last node

        while (*head)
        {
            *head = (*head)->next;
            curr_node->next = prev_node;
            prev_node = curr_node;
            curr_node = *head;
        }

        *head = prev_node; // Make last node as *head
    }
    return (*head);
}