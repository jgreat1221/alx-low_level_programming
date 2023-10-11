#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - iterate through an array
 * @array: terget array
 * @size: array size
 * @action: function pointer to array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int i;

if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(*array);
		array++;
	}
}
