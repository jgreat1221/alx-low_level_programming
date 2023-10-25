#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
/**
 * stuct listint_s - self referencial stuct
 * for creating nodes of a singly linked list
 *
 * @n: interger data
 * @next: self referencial pointer
 * pointer to thee next node of a list
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);

#endif
