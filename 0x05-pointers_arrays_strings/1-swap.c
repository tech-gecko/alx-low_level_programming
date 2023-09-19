#include "main.h"

/**
 * swap_int - Swaps the values of the two arguments
 * @a: First argument
 * @b: Second argument
 *
 * Return: Always 0 (success)
 */
void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
