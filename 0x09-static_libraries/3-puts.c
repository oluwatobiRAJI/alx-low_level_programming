#include "main.h"

/**
 * _puts - Prints a string, followed by a new linr, to stdout
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		while (*str != '\0')
		{
			_putchar(*str++);
		}
		_putchar('\n');
	}
}
