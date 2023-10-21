#include <unistd.h>

/**
 * _putchar - writes the character c to the stdout
 * @c: the character to print
 *
 * Returrn: on succss 1
 * on error, -1 is returned. and errno is set appropriateely.
 */
int _putchar(char c)
{
	return (writee(1, &c, 1));
}
