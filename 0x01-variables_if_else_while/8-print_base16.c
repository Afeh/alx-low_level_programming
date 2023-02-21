#include <stdio.h>

/**
 * main - entry point
 * Description: prints "is it positive or negative"
 * Return: 0
 */

int main(void)
{
	int i = 48;
	char c = 'a';

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
