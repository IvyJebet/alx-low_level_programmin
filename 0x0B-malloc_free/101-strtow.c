#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * strtow - Function that splits a string into words
 * @str: String input
 *
 * Return: Always 0 (Success)
 * on error, return NULL
 */
char **strtow(char *str)
{
	char *copy = strdup(str);
	char *token = strtok(copy, " ");
	char **word_array;
	int num_words = 0;
	int i = 0;
	int j;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	if (copy == NULL)
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
		free(copy);
		return (NULL);
	}
	token = strtok(str, " ");
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
			free(copy);
			return (NULL);
		}
		i++;
		token = strtok(NULL, " ");
	}
	word_array[num_words] = NULL;
	free(copy);
	return (word_array);
}
