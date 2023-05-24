#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - A function that searches for an integer
 * @size: The size of the elements
 * @cmp: The pointer
 * @array: The array
 * Return: -1 if size is <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int y;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (y = 0; y < size; y++)
	{
		if (cmp(array[y]))
			return (y);
	}
	return (-1);
}
