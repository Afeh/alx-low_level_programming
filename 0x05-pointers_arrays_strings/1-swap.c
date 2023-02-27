#include "main.h"

/**
 * swap_int - updates the value of the variable
 * the pointer points to to 98
 * @a: pointer to the variable to be exchanged
 * @b: pointer to be swaped
 */

void swap_int(int *a, int *b)
{
	int p;
	int l;

	l = *a;
	p = *b;

	*b = l;
	*a = p;
}
