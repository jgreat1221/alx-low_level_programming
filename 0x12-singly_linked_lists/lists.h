#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc and string)
 * @len: lenght of the string
 * @next: point to the next node
 * Descriptions: singly linked list
 */
typedef struct list_s
{
        char *str;
        unsigned int len;
        struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);

#endif
