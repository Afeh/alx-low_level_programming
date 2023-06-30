#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_digit - checks if a string is a valid positive number
 * @str: string to check
 * Return: 1 if valid positive number, 0 otherwise
 */
int is_digit(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}

	return (1);
}

/**
 * multiply - multiplies two positive numbers
 * @num1: first number
 * @num2: second number
 */
void multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j, k;
	int *result;

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;

	result = calloc(len1 + len2, sizeof(int));
	if (!result)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			k = i + j + 1;
			result[k] += (num1[i] - '0') * (num2[j] - '0');
			while (result[k] > 9)
			{
				result[k - 1] += result[k] / 10;
				result[k] %= 10;
				k--;
			}
		}
	}

	i = 0;
	while (result[i] == 0 && i < len1 + len2 - 1)
		i++;

	for (; i < len1 + len2; i++)
		printf("%d", result[i]);
	printf("\n");

	free(result);
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	multiply(argv[1], argv[2]);

	return (0);
}
