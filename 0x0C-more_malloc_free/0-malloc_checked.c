#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Function that allocates memory using malloc
 * @b: Unsigned integer
 *
 * Return: Always 0 (Success)
 * on error, return terminate with status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *malloc_checked;
	malloc_checked = malloc(b);
	if (malloc_checked == NULL)
	{
		exit(98);
	}
	return (malloc_checked);
}
