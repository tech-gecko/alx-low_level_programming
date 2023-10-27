#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Decimal number whose index bit is to be returned.
 * @index: The given index.
 *
 * Return: The bit at the specified index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1UL << index;
	bit = (n & mask) ? 1 : 0;
	return (bit);
}
