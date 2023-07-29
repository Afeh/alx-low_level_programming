#include <stdio.h>
/**
 * get_endianness - Get the endianness object
 *
 * Return: 0 or 1
 */

int get_endianness(void)
{
	unsigned int test_value = 0x01;
	unsigned char *byte_pointer = (unsigned char *)&test_value;


	return (byte_pointer[0] == 0x01);
}
