#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers
 * @argc: number of command line argument
 * @argv: the array that cntains the command line argument
 * Return: Always (0) successful
 */

int main(int argc, char *argv[])

{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
