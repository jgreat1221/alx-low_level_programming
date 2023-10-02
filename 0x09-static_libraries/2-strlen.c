#include "main.h"

/**
 *  _strlen - finds the length of a string
 *  @s: string to be counted
 *  Return: length of a string
 */

int _strlen(char *s)
{
	int c;
	int count = 0;

	for (c = 0 ; s[c] != '\0' ; c++)
		count++;
	return (count);
}
