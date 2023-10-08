#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2D array of ints
 *              with an order of height * width.
 * @width: Width of 2D array created.
 * @height: Height of 2D array created.
 *
 * Return: The pointer to 2D array.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = (int **)malloc(sizeof(int *) * height);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(p[j]);
			}
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
	free(p);
}
