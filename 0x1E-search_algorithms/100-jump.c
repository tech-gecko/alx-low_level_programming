#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Jump search algorithm.
 * @array: Array of integers.
 * @size: Size of the array.
 * @value: The value to be searched for.
 *
 * Description: Searches for a value in an array of integers,
 * using the jump search algorithm.
 * Return: index of value on success, -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump_step, start, end, jumps;

	if (array == NULL || size == 0)
		return (-1);

	jump_step = sqrt((double)size);
	start = end = jumps = 0;
	do {
		printf("Value checked array[%ld] = [%d]\n", end, array[end]);
		if (array[end] == value)
			return (end);
		jumps += 1;
		start = end;
		end = jump_step * jumps;
	} while (end < size && array[end] < value);

	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	for (i = start; i <= end && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
