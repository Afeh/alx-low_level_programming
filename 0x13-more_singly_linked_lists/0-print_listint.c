#include <stdio.h>
#include "list.h"

/**
 * print_listint - prints all the elements if a listint_t list
 * 
 * @h: Pointer to the head of the list
 * 
 * 
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;


	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}

	return (count);
}