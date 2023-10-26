#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - A function that converts a binary string to an unsigned int
 * @b: A pointer to a string containing '0' and '1' characters
 *
 * Return: The number that has been converted, 0 if there are non-binary character
 *  in the string or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		result = (result << 1) + (*b - '0');
		b++;
	}
	return (result);
}
