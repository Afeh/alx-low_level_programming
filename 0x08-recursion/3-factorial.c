#include "main.h"

/**
 * factorial - function that finds the factorial of a number
 * @n: the number to be calculated
 *
 * Return: integer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
