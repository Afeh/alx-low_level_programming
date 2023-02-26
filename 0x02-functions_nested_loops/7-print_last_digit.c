#include "main.h"

/**
 * print_last_digit- returns the last digit
 * @n: variable to be checked
 * Return: last digit
 */

int print_last_digit(int n)
{
	int l;


	if (n < 0)
		n = -n;

	l = n % 10;

	_putchar(l + '0');

	return (l);
}
