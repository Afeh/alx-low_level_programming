#include "main.h"

/**
 * print_square - Print line
 *
 *@size : Number of times line should be printed
 * Return: void
 */

void print_square(int size)
{
	int i;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
