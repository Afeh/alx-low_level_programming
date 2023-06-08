#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: string to be printed
 *
 * Retun: no value
 */


int _strlen_recursion(char *s)
{
	int i;

	i = 0;

	if (*s == '\0')
	{
		return (0);
	}
	i = 1 + _strlen_recursion(s + 1);
	return (i);

}