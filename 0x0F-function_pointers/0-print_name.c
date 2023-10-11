#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - a function that print name
 *
 * @f: variable to hold thee string name
 * @name: the name of the person
 */

void print_name(char *name, void (*f)(char *))

{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
