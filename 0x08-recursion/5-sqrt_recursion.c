#include "main.h"

/**
 * _sqrt_recursion - function that finds the natural square root of a number
 * @n: the number to be rooted
 *
 * Return: integer
 */

int _sqrt_helper(int n, int start, int end);

int _sqrt_helper(int n, int start, int end)
{
	if (start > end)
	{
		return (-1); 
	}

	int mid = start + (end - start) / 2;

	if (mid == n / mid)
	{
		return mid;
	}
	else if (mid < n / mid)
	{
		return _sqrt_helper(n, mid + 1, end);
	}
	else
	{
		return _sqrt_helper(n, start, mid - 1);
	}
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return _sqrt_helper(n, 1, n);
}
