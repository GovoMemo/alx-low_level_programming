#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - a function that frees 2 dimensional grid
 * previously created by alloc_grid function.
 * @grid: input
 * @height: input height
 * Return: free dimensional grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
