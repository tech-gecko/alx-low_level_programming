#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The decimal number to be converted.
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	int i = sizeof(unsigned long int) * 8 - 1, mask = 0;

	while (i >= 0)
	{
		if (n & (1UL << i) != 0)
		{
			_putchar('1');
			mask = 1;
		}
		else if (mask == 1)
			_putchar('0');
	}
	_putchar('\n');
}

