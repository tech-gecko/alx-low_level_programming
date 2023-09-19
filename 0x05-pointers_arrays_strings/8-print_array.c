#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints all elements of an array in order,
 * with each member separated by a comma,
 * followed by a space
 * @a: The array in question
 * @n: number of elements of the array
 *
 * Return: Always 0 (success)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
}
