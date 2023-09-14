#include "main.h"

/**
 * times_table - Prints 0*0 to 9*9 times table
 * @i: First digit initializer
 * @j: Second digit initializer
 *
 * Return: NULL
 */
void times_table(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		while (j < 10)
		{
			int result = i * j;

			_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
			_putchar(', ');
		}
	}
}
