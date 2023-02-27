#include "main.h"

/**
 * print_rev - returns a string in reverse
 *
 * @s: string to evaluate
 *
 * Return: the length of the string
 */

void print_rev(char *s)
{
	int i;
	int len;
	int l;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}


	len = i;

	l = len - 1;

	while (l >= 0)
	{
		_putchar(s[l]);
		l--;
	}
	_putchar('\n');
}
