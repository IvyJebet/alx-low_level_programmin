#include "main.h"
/**
 * char *_strcpy - Function that copies the string pointed to by src
 * @dest: Copy to
 * @src: Copy from
 *
 * Return: String
 */
char *_strcpy(char *dest, char *src)
{
	int y = 0;
	int x = 0;

	while (*(src + y) != '\0')
	{
		y++;
	}
	for (; x < y ; x++)
	{
		dest[x] = src[x];
	}
	dest[y] = '\0';
	return (dest);
}
