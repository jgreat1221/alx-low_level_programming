#include "main.h"
/**
 * print_alphabet_x10 - print alphabet in a lower case
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	char k;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (k = 'a'; k <= 'z'; k++)
			_putchar(k);
		 _putchar('\n');
	}
}
