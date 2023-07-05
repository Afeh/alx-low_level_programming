#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: Pointer to the head pointer of the list.
 * Return: Nothing
 */


void free_list(list_t *head)
{
	list_t *current = head;
	list_t *temp = current;


	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp->str);
		free(temp);
	}
}
