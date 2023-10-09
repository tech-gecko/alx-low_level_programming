#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2D grid previously created by me.
 * grid: The 2D grid to be freed.
 * height: Height/number of rows of the grid.
 *
 * Return: Nothing.
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
