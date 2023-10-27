#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The decimal number to be converted.
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	int i = sizeof(unsigned long int) * 8 - 1, flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (i >= 0)
	{
		if (n & (1UL << i))
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag == 1)
			_putchar('0');
		i--;
	}
}

