#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array of "nmemb"
 *          elements of "size" bytes each.
 * @nmemb: Number of elements or members.
 * @size: Size of each element or member.
 *
 * Return: Pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;
	unsigned int memlen = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < memlen; i++)
		p[i] = 0;
	return (p);
	free(p);
}
