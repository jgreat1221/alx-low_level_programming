#include "main.h"
/**
 * _puts - funtion that print a string with a new line
 * @str: string to bee printed
 * Return void
 */

void _puts(char *str)
{
	int c;

	for (c = 0 ; str[c] != '\0' ; c++)
		_putchar(str[c]);
	_putchar('\n');
}
