#include "search_algos.h"

/**
 * linear_search - Linear search algorithm.
 * @array: Array of integers.
 * @size: Size of the array.
 * @value: The value to be searched for.
 *
 * Description: Searches for a value in an array of integers,
 * using the linear search algorithm.
 * Return: index of value on success, -1 if not found.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);

		if (i == size - 1)
			return (-1);
	}
	return (0);
}
