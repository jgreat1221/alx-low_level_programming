#include <stdio.h>

/**
 * main - print its name, fllowed by a new line
 *
 * @argc: number of command line arguments.
 * @argv: arry that contain the command line argument.
 *
 * Return: (0) when successful
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
