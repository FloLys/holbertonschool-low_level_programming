#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Returns a pointer to a 2d array of ints
 * @grid: pointer to grid
 * @height: vertical
*/
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
