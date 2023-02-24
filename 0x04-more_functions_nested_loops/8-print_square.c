#include "main.h"

void print_square(int size)
{
	int i;
	int k;

	for (i = 0; i < size; i++)
	{
		for (k = 0; k < size; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
		
	}
}