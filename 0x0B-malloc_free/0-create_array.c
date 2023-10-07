#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Returns an array of size "size" with all
 *                members initialized to c.
 * @size: Size of returned array.
 * @c: value of all elements of the array.
 *
 * Return: The created array.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
	{
		p[i] = c;
	}
	return (p);
	free(p);
}
