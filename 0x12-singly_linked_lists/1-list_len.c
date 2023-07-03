#include <stdio.h>
#include "lists.h"
/**
 * list_len - function that counts the number of nodes
 * @h: string to search
 * Return: number of nodes
 *
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
