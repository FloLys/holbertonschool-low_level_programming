#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2d array of ints
 * @width: horizontal
 * @height: vertical
 * Return: pointer
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (j = 0; j < height; j++)
				free(grid[j]);

			free(grid);
			return (NULL);
		}
	}

	for (j = 0; j < width; j++)
	{
		for (i = 0; i < height; i++)
			grid[i][j] = 0;
	}

	return (grid);
}
