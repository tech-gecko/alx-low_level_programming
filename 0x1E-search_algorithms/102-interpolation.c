#include "search_algos.h"

/**
 * interpolation_search - Interpolation search algorithm.
 * @array: Array of integers.
 * @size: Size of the array.
 * @value: The value to be searched for.
 *
 * Description: Searches for a value in an array of integers,
 * using the interpolation search algorithm.
 * Return: index of value on success, -1 if not found.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t count = 0, low = 0, high = size - 1;
	size_t pos;

	if (array == NULL || size < 1)
		return (-1);

	for (count = 0; count < size; count++)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));

		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		if (array[pos] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			return (pos);
		}
		if (array[pos] > value)
		{
			high = pos - 1;
			count += 1;
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		}
		if (array[pos] < value)
		{
			low = pos + 1;
			count += 1;
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		}
	}
	return (-1);
}
