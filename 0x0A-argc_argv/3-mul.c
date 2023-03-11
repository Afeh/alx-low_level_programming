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
	int i;


	int result;

	if (argc < 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; 1 < argc; i++)
		{
			result *= atoi(argv[i]);
		}
		printf("%d\n", result);
	}

	return (0);

}
