#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of the main function.
 * @n: The number of bytes to print.
 */
void print_opcodes(int n)
{
	unsigned char *main_ptr = (unsigned char *)print_opcodes;
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%02x ", main_ptr[i]);
	}

	printf("\n");
}

/**
 * main - Entry point
 * @argc: The number of command line arguments.
 * @argv: Array containing the command line arguments.
 *
 * Return: 0 on success, 1 or 2 on failure.
 */
int main(int argc, char *argv[])
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(num_bytes);

	return (0);
}