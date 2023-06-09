#include "main.h"

/**
 * _strncpy - adds two strings together
 * @dest: The sring to be added to
 * @src: The string to be added
 * @n: the number of characters to be added
 * Return: the pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int dest_len;
	int i;
	int j;

	char *str;

	j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}

	dest_len = j;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
