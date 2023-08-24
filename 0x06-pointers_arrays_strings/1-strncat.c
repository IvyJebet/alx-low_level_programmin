#include "main.h"
/**
 * _strncat - Concatenates two strings using n bytes from src at most
 * @dest: Input value
 * @src: Input value
 * @n: Input value
 *
 * Return: dest
 */
char _strncat(char *dest, char *src, int n)
{
	char *originalDest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--:
	}

	*dest = '\0';
	return (originalDest);
}
