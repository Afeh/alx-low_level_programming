#include <stdio.h>

/**
 * print_alphabet- prints alphabet in lowercase
 * Description: prints "_putchar"
 * Return: 0
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 122; i++)
	{
		_putchar(i);

		_putchar('/n');
	}

	return (0);
}
