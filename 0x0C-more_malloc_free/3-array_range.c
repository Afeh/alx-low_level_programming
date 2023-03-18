#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * array_range - finds the length of a string
 *
 *
 * @min: the length to be calculated
 * @max: the size of the array
 *
 * Return: pointer to newly allocated string concatenation
 *
 */

int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < max - min + 1; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
