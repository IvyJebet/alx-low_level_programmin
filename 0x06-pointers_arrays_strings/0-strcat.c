#include "main.h"
/**
 * _strcat - concatenates two strings
 * dest: The string to be appended upon
 * @src: The string to be appended to dest
 * @n: The number of bytes from src to be appended to dest
 *
 * Return: Void
 */
char *_strcat(char *dest, char *src);
{
	char *i = dest;

	while (*i)
	{
		i++;
	}
	while (*src)
	{
		*i++ = *src++;
	}
	*i = '\0';
	return (dest);
}
