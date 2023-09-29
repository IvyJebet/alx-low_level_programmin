#include "main.h"
/**
 * flip_bits - Counts the number of bits supposed to be changed
 * to get from one number to another number
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			count++;
	}

	return (count);
}
