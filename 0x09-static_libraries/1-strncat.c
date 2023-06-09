#include "main.h"

/**
 * _strncat - adds two strings together
 * @dest: The sring to be added to
 * @src: The string to be added
 * @n: the number of characters to be added
 * Return: the pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int i;

	char *str;

	int j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}

	dest_len = j;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	dest[dest_len + i] = '\0';

	str = dest;

	return (str);
}
