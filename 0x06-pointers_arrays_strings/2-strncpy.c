#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copies a string
 * @dest: Where the string copied is stored
 * @src: The source string
 * @n: The number of bytes to be copied from src.
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
