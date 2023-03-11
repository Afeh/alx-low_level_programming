#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - is a function that prints the name.
 *@argc: is an argument counter for char.
 *@argv: is an argument value for char.
 *Return: Returns always success.
**/

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
