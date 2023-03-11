#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - is a function that prints the name.
 *@argc: is an argument counter for char.
 *@argv: is an argument value for char.
 *Return: Returns always success.
**/

int main(int argc, char **argv)
{

	int result;

	if (argc < 2)
	{
		printf("Error\n");
		return (0);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
		return (1);
	}


}
