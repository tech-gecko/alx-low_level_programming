#include "function_pointers.h"
#include <stdlib.h>

void print_name(char *name, void (*f)(char *))
{
	void (*p)(char *);

	if (name == NULL || f == NULL)
		return (NULL);
	p = f;
	p(name);
}
