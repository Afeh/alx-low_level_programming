#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - prints an integer
 * @array: is pointer to int
 * @action: is a pointer to the function
 * @size: is the size of the array
 *
 * Return: Nothing.
**/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;
	if(array == NULL || action == NULL)
	{
		return;
	}
	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
