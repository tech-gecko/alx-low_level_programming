#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers from
 *               "min" to "max" inclusive.
 * @min: Value of first index of array.
 * @max: Value of last index of array.
 *
 * Return: Pointer to created array.
 */
int *array_range(int min, int max)
{
	int i = 0;
	int j = min, *p;
	int arrlen = (max - min) + 1; 

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * ((max - min) + 1));
	if (p == NULL)
		return (NULL);
	while (i < arrlen)
	{
		p[i] = j;
		i++;
		j++;
	}
	return (p);
	free(p);
}
