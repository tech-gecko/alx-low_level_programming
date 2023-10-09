#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory of size b using malloc.
 * @b: Size of memory to be allocated.
 *
 * Return: Pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (p);
	free(p);
}
