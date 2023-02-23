#include "main.h"

/**
 * _isdigit - Checks if c is a number
 * @c: the character to be checked
 * Return: 0 or 1
 */


int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
