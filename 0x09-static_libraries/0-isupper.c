#include "main.h"
/**
 * _isupper - programme that checks for uppercase character
 * @c: Variable text
 * Return: Always 0 (Successful)
 */
int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
