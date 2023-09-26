#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: thee character to print
 *
 * Return: one success 1.
 * on erro, -1 is returrned, and erro is set appropriatly.
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
