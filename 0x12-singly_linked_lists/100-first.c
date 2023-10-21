#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

void comefirstbyCTC(void)__attribute__ ((constructor));

/**
 * comefirst - function  that runs before the main function
 */
void comefirstbyCTC(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
