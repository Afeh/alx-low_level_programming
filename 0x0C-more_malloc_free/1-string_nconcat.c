#include <stdlib.h>
#include <stdio.h>
#include "main.h"

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

	length = 0;
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
 * *string_nconcat - nested loop to make grid
 * @s1: width input
 * @s2: height input
 * @n: extent of s2 to be printed
 * Return: pointer to 2 dim. array
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int i, j, size_s1, size_s2;


	size_s1 = length(s1);
	size_s2 = length(s2);

	if (n >= size_s2)
	{
		n = size_s2;
	}

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	result = malloc((size_s1 + n + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size_s1; i++)
	{
		result[i] = s1[i];
	}

	for (j = 0; j <= n; j++)
	{
		result[i++] = s2[j];
	}

	result[i] = '\0';

	return (result);

}
