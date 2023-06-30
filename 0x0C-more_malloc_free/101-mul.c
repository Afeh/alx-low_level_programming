#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * multiply - multiplies two positive numbers
 * @num1: first number
 * @num2: second number
 */



void multiply(char *num1, char *num2)
{
	unsigned long mul = 0;
	int i, j;

	for (i = 0; num1[i] != '\0'; i++)
	{
		if (num1[i] > '9' || num1[i] < '0')
		{
			printf("Error\n");
			exit(98);
		}

		for (j = 0; num2[j] != '\0'; j++)
		{
			if (num2[j] > '9' || num2[j] < '0')
			{
				printf("Error\n");
				exit(98);
			}

			mul = mul * 10 + ((num1[i] - '0') * (num2[j] - '0'));
		}
	}

	printf("%lu\n", mul);

	return (0);
}
