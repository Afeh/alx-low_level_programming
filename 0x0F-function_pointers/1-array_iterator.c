#include <stdio.h>
#include "function_pointers.h"


/**
 * array_iterator - function that iterates through an array
 *
 * @array: an array of integers
 * @size: size of array
 * @action: function pointer takes an arg of int
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size != 0 && action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}

}
