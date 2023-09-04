#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2D grid previously created
 * by my alloc_grid function
 * @grid: 2D grid pointer
 * @height: Height of the grid
 *
 * Return: (void function)
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
