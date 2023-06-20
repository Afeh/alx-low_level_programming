#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _calloc - finds the length of a string
 *
 *
 * @nmemb: the length to be calculated
 * @size: the size of the array
 *
 * Return: pointer to newly allocated string concatenation
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, nmemb * size);

	return (ptr);
}
