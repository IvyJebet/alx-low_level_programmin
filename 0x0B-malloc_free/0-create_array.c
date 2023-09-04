#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - Function that creates an array of chars
 * @size: Unsigned integer that represents size of array
 * @c: Character to initialize array  with
 *
 * Return: Always 0 (Success)
 * on error, returns null
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	size_t i;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *)malloc((size + 1) * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	array[size] = '\0';
	printf("\n");
	return (array);
}
