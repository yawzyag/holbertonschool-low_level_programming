#ifndef LIST_H
#define LIST_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
/* this prototype has to be declared in a header file */
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
#endif /* LIST_H */
