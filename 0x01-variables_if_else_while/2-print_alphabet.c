#include <stdio.h>

/**
 * main - entry point
 * Description: prints "is it positive or negative"
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar (c);
		c++;
	}

	putchar ('\n');

	return (0);
}
