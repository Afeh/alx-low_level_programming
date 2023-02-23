#include "main.h"

/**
 * print_line - Print line
 *
 *@n : Number of times line should be printed
 * Return: void
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
		_putchar('_');
		n--;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
