#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add positive numbers
 * @argc: numbers of command line argument
 * @argv: array that contains the program command line arg
 * Return: Always (0) successful
 */

int main(int argc, char *argv[])

{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\n'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
