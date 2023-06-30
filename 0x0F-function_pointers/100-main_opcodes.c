#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints the opcodes of a given function
 * @func: pointer to the function
 * @n: number of bytes to print
 */
void print_opcodes(void (*func)(void), int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%02x%c", *((unsigned char *)func + i), i == n - 1 ? '\n' : ' ');
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1 or 2 on failure
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(main, n);

	return (0);
}
