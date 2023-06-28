#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: number of argumrnts
 * @argv: string with arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum, i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		char *num = argv[i];

		for (j = 0; num[j] != '\0'; j++)
		{
			if (num[j] < '0' || num[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(num);
	}

	printf("%d\n", sum);
	return (0);
}
