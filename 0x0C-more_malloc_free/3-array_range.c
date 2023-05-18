#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - A function that creates an array of integers
 * @min: The minimum value
 * @max: The maximum value
 * Return: a pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array, x = 0, y = min;

	if (min > max)
		return (0);
	array = malloc((max - min + 1) * sizeof(int));
	if (!array)
		return (0);
	while (x <= max - min)
		array[x++] = y++;
	return (array);
}
