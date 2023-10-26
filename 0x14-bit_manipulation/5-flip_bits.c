#include "main.h"

/**
 * flip_bits - A function that calculates the number of bits needed to flip
 * to get from n to m
 * @n: First unsigned long integer
 * @m: Second unsigned long integer
 *
 * Return: Number of bits to flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff > 0)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}
