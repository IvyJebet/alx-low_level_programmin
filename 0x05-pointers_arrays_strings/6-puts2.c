#include "main.h"
/**
 * puts2 - Function that prints only one character out of two
 * starting with the first one
 * @str: input
 *
 * Return: Print
 */
void puts2(char *str)
{
	int longi = 0;

	while (str[longi] != '\0')
	{
		_putchar(str[longi]);
		longi += 2;
	}
	_putchar('\n');
}
