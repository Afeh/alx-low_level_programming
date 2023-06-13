#include "main.h"
#include <stdlib.h>

/**
 * *create_array - a function that creates an array of chars, and initializes it with a specific char
 *@c: is an argument counter for char.
 *@size: is an argument value for char.
 *Return: Returns always arr.
**/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
