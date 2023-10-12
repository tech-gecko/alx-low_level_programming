#include "function_pointers.h"

/**
 * array_iterator - Executes "action" on every
 *                  member of "array".
 * @array: Array to be worked on.
 * @size: Size of "array".
 * @action: Action to be executed.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || p == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
