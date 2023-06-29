#include "main.h"

/**
 * _strcmp - Compares pointers to be strings.
 * @s1: First string to be compared.
 * @s2: Second string to be compared.
 *
 * Return: if str1 < str2, = negative difference
 * If str1 > str2, = positive difference
 * If str1 == str2, = 0.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
