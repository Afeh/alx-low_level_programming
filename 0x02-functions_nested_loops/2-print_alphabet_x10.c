#include "main.h"

/**
 * print_alphabet_x10- prints alphabet in lowercase ten times
 * Description: prints "_putchar"
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
