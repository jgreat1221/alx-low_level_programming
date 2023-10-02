#include "main.h"
/**
 * _memset - fill a part of memory with a specific value
 * @s: starting the address of memory to be filled
 * @b: the disired output
 * @n: number of bytes to be change
 *
 * Return: changed arry with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)

{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
