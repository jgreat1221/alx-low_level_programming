#include "main.h"
/**
 * print_numbers - function that checks for a digit (0 through 9)
 * 
 * Return: Alawys 0 (Successful)
 */

void print_numbers(void)

{
	int c;

	for (c = 0; c < 10; c++)
	{
		_putchar(c + '0');
	}
		_putchar('\n');
}
