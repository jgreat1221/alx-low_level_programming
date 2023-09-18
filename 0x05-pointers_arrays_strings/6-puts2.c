#include "main.h"
/**
 * puts2 - function that print other character of a string
 * @str: string to be printed
 * Return: void
 */

void puts2(char *str)
{
	int p;

	for (p = 0 ; str[p] != '\0' ; p++)
	{
		if (p % 2 == 0)
			_putchar(str[p]);
	}
	_putchar('\n');
}
