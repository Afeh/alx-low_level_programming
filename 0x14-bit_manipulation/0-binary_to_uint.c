#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 *
 * @b: The binary string to convert
 *
 * Return: the converted unsigned int value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = result * 2 + (b[i] - '0');
			i++;
		}
		else
			return (0);
	}

	return (result);
}
