#include <stdio.h>
#include "lists.h"

/**
 * print_list - locates a character in a string
 * @h: string to search
 * Return: number of nodes
 *
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
		count++;

	}

	return (count);
}