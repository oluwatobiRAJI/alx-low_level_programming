#include "main.h"

/**
 * _isdigit - Checks for a digit
 * @c: The number to be checked
 * Return: 1 if it's a digit or 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
