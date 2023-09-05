#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * strtow - Function that splits a string into words
 * @str: String input
 *
 * Return: A pointer to an array of strings
 * on error, return NULL
 */
char **strtow(char *str)
{
	char **word_array;
	char *token = strtok(str, " ");
	int num_words = 0;
	int i = 0;
	int j;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	while (token)
	{
		num_words++;
		token = strtok(NULL, " ");
	}
	word_array = (char **)malloc((num_words + 1) * sizeof(char *));
	if (word_array == NULL)
	{
		return (NULL);
	}
	while (token)
	{
		word_array[i] = strdup(token);
		if (word_array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(word_array[j]);
			}
			free(word_array);
			return (NULL);
		}
		i++;
		token = strtok(NULL, " ");
	}
	word_array[num_words] = NULL;
	return (word_array);
}
