#include "main.h"

/**
 * get_endianness - A function that checks the endianess of the System
 *
 * Return: 0 if system is big-endian, 1 if it is little-endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *byte = (unsigned char *)&num;

	return ((int)*byte);
}
