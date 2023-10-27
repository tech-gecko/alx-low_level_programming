#include "main.h"

/**
 * clear_bit - clears the value of a bit to 0 at a given index.
 * @n: Pointer to decimal number whose binary value bit
 *     is to be cleared at given index.
 * @index: Index at which the bit is to be cleared to 0.
 *
 * Return: 1 if it worked, or
 *         -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	*n &= ~mask;
	return (1);
}
