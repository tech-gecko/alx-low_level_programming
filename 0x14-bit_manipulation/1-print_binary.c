#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The decimal number to be converted.
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << 31;

	while (mask != 0)
	{
		if ((n & mask) != 0)
			_putchar('1');
		else
			_putchar('0');

		mask >>= 1;
	}
	_putchar('\n');
}

