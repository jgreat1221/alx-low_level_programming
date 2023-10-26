#include "lists.h"
/**
 * get_nodeint_at_index - retreive a node at an index
 * @head: pointer to the first element of a list
 * @index: node desired position to retrive
 * Return: pointer to the retrieved node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;

	for (k = 0; k < index; k++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
