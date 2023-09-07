#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Function that allocates memory using malloc
 * @b: Number of bytes to allocate
 *
 * Return: Pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
