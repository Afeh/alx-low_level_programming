#include <stdio.h>

/**
 * main - entry point
 * Description: prints "the Alphabet"
 * Return: 0
 */

int main(void)
{

	char first = 'a';

	while (first <= 'z')
	{
		putchar(first);
		first++;
	}

	char sec = 'A';

	while (sec <= 'Z')
	{
		putchar(sec);
		sec++;
	}
	putchar('\n');
	return (0);
}
