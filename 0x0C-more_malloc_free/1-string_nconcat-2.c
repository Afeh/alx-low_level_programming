#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - function concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to newly allocated space and NULL on failure
 */

char *str_noncat(char *s1, char *s2)
{
	char *mem;
	int len1, len2;
	int total_len;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	else if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	total_len = len1 + len2 + 1;

	mem = malloc(sizeof(char) * total_len);

	if (mem == NULL)
	{
		return (NULL);
	}

	memcpy(mem, s1, len1);
	memcpy(mem + len1, s2, len2 + 1);

	return (mem);
}