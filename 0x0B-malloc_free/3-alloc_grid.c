#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - A function that returns a pointer to a
 * two dimensional array of integers
 * @width: The matrix width
 * @height: The height of the matrix
 * Return: A pointer otherwise return NULL
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int x, t;

	if (height <= 0 || width <= 0)
		return (NULL);
	matrix = (int **) malloc(sizeof(int *) * height);
	if (matrix == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		matrix[x] = (int *) malloc(sizeof(int) * width);
		if (matrix[x] == NULL)
		{
			free(matrix);
			for (t = 0; t <= x; t++)
				free(matrix[t]);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (t = 0; t < width; t++)
		{
			matrix[x][t] = 0;
		}
	}
	return (matrix);
}


