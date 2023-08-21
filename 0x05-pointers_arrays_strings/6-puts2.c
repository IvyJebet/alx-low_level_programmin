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
	int i = 0;
	char *j = str;
	int k;

	while (*j != '\0')
	{
		j++;
		longi++;
	}
	i = longi - 1;
	for (k = 0; k <= i; k++)
	{
		if (k % 2 == 0)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
