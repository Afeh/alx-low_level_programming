#include <stdio.h>

/**
 * print_before - function prints first before main
 * Return: nothing
 */

void __attribute__((constructor))print_before(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
