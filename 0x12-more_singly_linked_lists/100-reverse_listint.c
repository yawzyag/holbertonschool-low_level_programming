#include "lists.h"

listint_t *reverse_listint(listint_t **head)
{
    listint_t *prevNode, *curNode;

    if(*head)
    {
        prevNode = *head;
        curNode = (*head)->next;
        *head = (*head)->next;

        prevNode->next = NULL; // Make first node as last node

        while(*head)
        {
            *head = (*head)->next;
            curNode->next = prevNode;

            prevNode = curNode;
            curNode = *head;
        }

        *head = prevNode; // Make last node as *head
    }
    return (*head);
}