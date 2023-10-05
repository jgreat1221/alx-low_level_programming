#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: arguments count
 * @atgv: aargument vector
 * Return: Always (0) successful
 */

int main(int argc, char *argv[])

{
	(void) argv;

	printf("%d\n", argc -1);
	return (0);
}
