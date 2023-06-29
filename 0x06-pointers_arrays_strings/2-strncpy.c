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
	int index = 0;
	int src_len = 0;

	while (src[index])
		src_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = src_len; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
