#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2 dimensional grid created by alloc_grid()
 * @grid: The grid to be freed
 * @height: The height of the grid
 */
void free_grid(int **grid, int height)
{
	int r;

	for (r = 0; r < height; r++)
	{
		free(grid[r]);
	}
	free(grid);
}

