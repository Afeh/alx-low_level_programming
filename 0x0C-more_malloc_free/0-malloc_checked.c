#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *malloc_checked - nested loop to make grid
 * @b: width input
 * Return: pointer to 2 dim. array
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
