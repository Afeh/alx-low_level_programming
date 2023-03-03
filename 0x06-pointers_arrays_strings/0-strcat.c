#include "main.h"


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