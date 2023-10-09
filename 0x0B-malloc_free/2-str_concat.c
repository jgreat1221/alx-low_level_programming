#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concanate two string
 *
 * @s1: frist string
 * @s2: second string
 *
 * Return: pointer to the concanate two string
 */

char *str_concat(char *s1, char *s2)

{
	size_t i, j, u, r;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}

	ptr = malloc(sizeof(char) * (i + j + 1));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (u = 0; u < i; u++)
	{
		ptr[u] = s1[u];
	}
	for (r = 0; r <= j; r++)
	{
		ptr[u] = s2[r];
		u++;
	}
	return (ptr);
}
