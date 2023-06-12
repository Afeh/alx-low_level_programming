#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - is a function that prints the name.
 *@argc: is an argument counter for char.
 *@argv: is an agument value for char.
 *Return: Returns always success.
**/

int main(int argc, char *argv[])
{
	int a;
	int b;
	int result;

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	if (argc > 1)
	{
		result = a * b;
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
	}

	return (1);
}
