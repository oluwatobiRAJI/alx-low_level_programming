#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n element of an arrraya of integers
 * @a: Array of integers
 * @n: Number of elements of the array to be printed
 *
 * Return: ALways 0.
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
}
