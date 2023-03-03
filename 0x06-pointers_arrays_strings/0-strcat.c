#include "main.h"

/**
 * *_strcat - adds two strings together
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	char *str;

	while (dest[j] != '\0')
	{
		j++;
	}

	while (src[i] <= '\0')
	{
		dest['\0'] = src[i];
		i++;
	}

	dest[j] = '\0';
	str = dest;
	return (str);
}