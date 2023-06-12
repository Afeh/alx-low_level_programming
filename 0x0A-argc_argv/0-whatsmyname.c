#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - is a function that prints the name.
 *@argc: is an argument counter for char.
 *@argv: is an agument value for char.
 *Return: Returns always success.
**/

int main(int argc, char* argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
