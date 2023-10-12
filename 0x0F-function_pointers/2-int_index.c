#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @array: Array within which integer is looked for.
 * @size: Size of "array".
 * @cmp: Pointer to function that searches "array".
 *
 * Return: -1 if error found
 *          i if return value is not 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int val;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		val = cmp(array[i]);
		if (val != 0)
			return (i);
	}
	return (-1);
}
