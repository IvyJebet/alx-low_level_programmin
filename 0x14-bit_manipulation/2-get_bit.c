#include "main.h"

/**
 * get_bit - Function that gets the value of a bit at a given index
 * @n: The long integer to extract the bit from
 * @index: The index of the bit to retrieve (0-based)
 *
 * Return: The value of the bit at the specified index,
 * or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	if ((n & mask) == mask)
	{
		return (1);
		}
		else
		{
			return (0);
		}
}
