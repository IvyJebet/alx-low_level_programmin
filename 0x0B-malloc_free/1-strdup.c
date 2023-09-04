#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a given string
 * and returns a pointer to the duplicated string
 * @str: String given as a parameter
 *
 * Return: Always 0 (Success)
 * on error, returns NULL
 */
char *_strdup(char *str)
{
	char *duplicate;
	size_t len = 0;
	size_t i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	duplicate = (char *)malloc(len * sizeof(char));
	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate[len] = '\0';
	return (duplicate);
}
