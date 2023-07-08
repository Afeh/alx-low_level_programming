#include <stdlib.h>
#include <stdio.h>

/**
 * flip_bits - Returns the number of bits needed to flip to get from one number to another.
 *
 * @n: The first number.
 * @m: The second number.
 * Return: The number of bits needed to be flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorResult = n ^ m;
	unsigned int count = 0;

	while (xorResult != 0)
	{
		if (xorResult & 1)
		{
			count++;
		}
		xorResult >>= 1;
	}

	return (count);
}
