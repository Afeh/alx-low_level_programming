#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * length - finds the length of a string
 *
 *
 * @string: the length to be calculated
 *
 * Return: pointer to newly allocated string concatenation
 *
 */


unsigned int length(char *string)
{
	unsigned int i;
	unsigned int length;

	i = 0;

	if (string == NULL)
	{
		string = "";
	}
	else
	{
		while (string[i] != '\0')
		{
			length++;
			i++;
		}
	}

	return (length);
}

/**
 * str_concat - concatenates 2 strings
 *
 *
 * @s1: first string
 * @s2: string to add to end of of first string
 *
 * Return: pointer to newly allocated string concatenation
 *
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int k, l;
	unsigned int size_s1;
	unsigned int size_s2;
	char *concatd;

	size_s1 = length(s1);
	size_s2 = length(s2);

	concatd = malloc(size_s1 + size_s2 + 1);

	if (concatd == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < size_s1; k++)
	{
		concatd[k] = s1[k];
	}

	for (l = 0; l < size_s2; l++)
	{
		concatd[k++] = s2[l];
	}

	concatd[k] = '\0';

	return (concatd);
}
