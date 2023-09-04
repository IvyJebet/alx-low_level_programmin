#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Always 0 (Succesful)
 * on error, returns NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenate;
	size_t len1 = 0;
	size_t len2 = 0;
	size_t i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	concatenate = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (concatenate == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		concatenate[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		concatenate[len1 + i] = s2[i];
	}
	concatenate[len1 + len2] = '\0';
	return (concatenate);
}
