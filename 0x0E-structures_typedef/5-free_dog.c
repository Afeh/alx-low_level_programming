#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function takes a pointer to a dog_t
 * 
 * @d: pointer to dog_t
 * 
 * Return: NULL 
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);

		free(d);
	}
}
