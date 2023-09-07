#include <stdlib.h>
#include "main.h"

/**
 * array_range - Function that creates an array of integers
 * @min: Smallest value in the array
 * @max: Largest value in the array
 *
 * Return: Pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *result;
	int numIntegers;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	numIntegers = max - min + 1;
	result = (int *)malloc(numIntegers * sizeof(int));
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < numIntegers; i++)
	{
		result[i] = min + i;
	}
	return  (result);
}
