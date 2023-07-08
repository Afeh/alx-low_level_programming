#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 *
 * @n: The number to print in binary.
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int leadingZeros;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	leadingZeros = 1;

	while (mask != 0)
	{
		if (n & mask)
		{
			leadingZeros = 0;
			_putchar('1');
		}
		else if (!leadingZeros)
		{
			_putchar('0');
		}

		mask >>= 1;
	}
}
