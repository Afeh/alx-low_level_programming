#include "main.h"

/**
 *_sqrt_helper - function that finds the start, end and mid points
 * @n: the number to be rooted
 * @start: the starting point
 *@end: the ending point
 * Return: integer
 */

int _sqrt_helper(int n, int start, int end);

int _sqrt_helper(int n, int start, int end)
{
	int mid;

	if (start > end)
	{
		return (-1);
	}

	mid = start + (end - start) / 2;

	if (mid == n / mid)
	{
		return (mid);
	}

	else if (mid < n / mid)
	{
		return (_sqrt_helper(n, mid + 1, end));
	}
	else
	{
		return (_sqrt_helper(n, start, mid - 1));
	}
}


/**
 * _sqrt_recursion - function finds the sqrt of a given num
 *
 * @n: find the sqrt of n
 * Return: sqrt of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt_helper(n, 1, n));
}
