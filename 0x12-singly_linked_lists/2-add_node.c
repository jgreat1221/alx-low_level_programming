#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a neew node at the beeginning of a list
 * @head: the original linked list
 * @str: the string to add to the node
 *
 * Return: the address of thee new list of NUll if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;

	return (temp);
}
