#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - A function that executes a function given as a parameter
 * on each element of array
 * @array: The array
 * @size: The size
 * @action: The pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int z;

	if (array == NULL || action == NULL)
		return;
	for (z = 0; z < size; z++)
	{
		action(array[z]);
	}
}
