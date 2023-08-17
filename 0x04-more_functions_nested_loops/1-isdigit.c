#include "main.h"
/**
 * _isdigit - Checks for a digit (0 through 9)
 * @c: int to be checked
 * ends in a new line
 *
 * Return: Always 0
 */
int _isdigit(int c)
{

	if (c > '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
