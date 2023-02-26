#include "main.h"

/**
 * print_sign- checks if a letter is in lowercase
 * @n: variable to be checked
 * Return: 0 or 1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('48');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
