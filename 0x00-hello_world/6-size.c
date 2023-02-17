#include <stdio.h>

/**
 * main - Entry point
 * Description: Code that prints the size of various data types
 * Return: 0
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d bytes(s)\n", sizeof(int));
	printf("Size of a long int: %d bytes(s)\n", sizeof(long int));
	printf("Size of an int: %d bytes(s)\n", sizeof(long long int));
	printf("Size of an int: %d bytes(s)\n", sizeof(float));
	return (0);
}
