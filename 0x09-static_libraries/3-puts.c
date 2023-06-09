#include "main.h"

/**
 * _puts - returns a string
 *
 * @str: string to evaluate
 *
 * Return: the length of the string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
