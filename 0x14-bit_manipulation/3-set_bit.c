#include "main.h"
/**
 * set_bit - Sets a bit located at a given index to 1
 * @n: Pointer to the number that is to be changed
 * @index: The index of the bit to set to 1
 *
 * Return: For success 1, for failure -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}