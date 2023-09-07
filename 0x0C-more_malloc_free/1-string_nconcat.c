#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - Function that concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes from s2 to concatenate to s1
 *
 * Return: Pointer to resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int size;
	unsigned int len_s2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s2[len_s2] != '\0')
	{
		len_s2++;
	}
	size = strlen(s1) + (n >= len_s2 ? len_s2 : n) + 1;
	result = (char *)malloc(size);
	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strncat(result, s2, n >= len_s2 ? len_s2 : n);
	return (result);
}
