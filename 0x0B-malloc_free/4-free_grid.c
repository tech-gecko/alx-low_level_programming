#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2D grid previously created by me.
 * @grid: The allocated 2D grid to be freed.
 * @height: height/number of rows of "grid".
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
