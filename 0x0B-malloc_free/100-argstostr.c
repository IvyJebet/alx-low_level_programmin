#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - Concatenates all the arguments of the program
 * @ac: Number of arguments parameter
 * @av: Array of strings representing the arguments Parameter
 *
 * Return: Always 0 (Success)
 * on error, returns NULL
 */
char *argstostr(int ac, char **av)
{
	char *concatenated_str;
	int current_position = 0;
	int total_length = 0;
	int i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}
	concatenated_str = (char *)malloc(total_length + 1);
	if (concatenated_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		strcpy(concatenated_str + current_position, av[i]);
		current_position += strlen(av[i]);
		current_position++;
	}
	concatenated_str[total_length] = '\0';
	return (concatenated_str);
}
