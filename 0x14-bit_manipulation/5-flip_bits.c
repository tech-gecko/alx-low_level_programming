#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 *             to get from n to m.
 * @n: 1st number.
 * @m: 2nd number.
 *
 * Return: Number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor > 0)
	{
		count += xor & 1;
		xor >>= 1;
	}
	return (count);
}
