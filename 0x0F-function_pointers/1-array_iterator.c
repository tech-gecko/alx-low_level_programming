#include "function_pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	void (*p)(int);
	p = action;

	if (array == NULL || p == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		p(array[i]);
	}
}
