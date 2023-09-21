#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: The array of integers
 * @n: The number of elements of the array
 *
 * Return: NULL
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;

	while (j >= 0 && i <= n - 1)
	{
		*a[i] = *a[j];
		i++;
		j--;
	}
}
