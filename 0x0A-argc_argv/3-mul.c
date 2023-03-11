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

	if (argc < 3 || argc > 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
		return (0);
	}


}
