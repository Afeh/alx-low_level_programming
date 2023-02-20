#include <stdio.h>

/**
 * main - entry point
 * Description: prints "is it positive or negative"
 * Return: 0
 */

int main(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		if (i != 'q' && i != 'e')
			putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
