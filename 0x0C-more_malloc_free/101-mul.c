#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * isNumeric - Function to check whether a string is composed of digits
 * @str: String to check
 *
 * Return: 1 if string is numeric, 0 if not numeric
 */
int isNumeric(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
 * main - Cecks the number of command-line arguments
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;
	char *num1Str;
	char *num2Str;

	if (argc != 3)
	{
		printf("Error\n");
	}
	num1Str = argv[1];
	num2Str = argv[2];
	if (!isNumeric(num1Str) || !isNumeric(num2Str))
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(num1Str);
	num2 = atoi(num2Str);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
