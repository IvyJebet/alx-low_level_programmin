#include "main.h"
/**
 * get_endianness - Checks whether a machine is a little or a big endian
 * Return: For big 0, for little 1
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}
