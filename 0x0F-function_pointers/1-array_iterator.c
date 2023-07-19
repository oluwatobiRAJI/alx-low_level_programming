#include "function_pointers.h"

/**
 * array_iterator - a parameter on each element of an array.
 * @array: Input
 * @size: Input
 * @action: Input
 *
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
