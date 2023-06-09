#include "main.h"

/**
 *is_prime_helper - function that finds the start, end and mid points
 * @n: the number to be rooted
 * @divisor: the starting point
 * Return: integer
 */

int is_prime_helper(int n, int divisor);

int is_prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)
	{
		return (1);
	}

	if (n % divisor == 0)
	{
		return (0);
	}

	return (is_prime_helper(n, divisor + 1));
}

/**
 *is_prime_number - function that finds prime numbers
 * @n: the number to be tested
 * Return: integer
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (is_prime_helper(n, 2));
}
