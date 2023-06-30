#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name of the person
 * @f: is a pointer that takes char * as arg
 * Return nothing
 **/

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
