#include <stdlib.h>
#include "main.h"

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit (98);
		return (NULL);
	}
	return (p);
	free(p);
}
