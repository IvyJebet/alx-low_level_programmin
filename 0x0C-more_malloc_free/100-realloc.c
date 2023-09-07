#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _realloc - Function that reallocates a memory
 * block using malloc and free
 * @ptr: Pointer to the memory previously allocated
 * @old_size: Size, in bytes of the allocated space for ptr
 * @new_size: New size, in bytes of the new memory block
 *
 * Return: Pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size;

	if (ptr == NULL)
	{
		if (new_size == 0)
		{
			return (malloc(new_size));
		}
		return (malloc(new_size));
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	min_size = (old_size < new_size) ? old_size : new_size;
	memcpy(new_ptr, ptr, min_size);
	free(ptr);
	return (new_ptr);
}
