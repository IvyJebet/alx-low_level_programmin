#include "main.h"
#include <stdio.h>
/**
 * _isupper - Function that checks if c is upper
 * @c: input for character
 *
 * Return: 1 if its uppercase, 0 if not uppercase
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
