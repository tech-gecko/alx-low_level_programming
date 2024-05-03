#include "main.h"

/**
 * print_most_numbers - Prints 0 to 9, except 2 and 4, followed by a new line.
 *
 * Return: Nothing.
 */
void print_most_numbers(void)
{
	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		else
			_putchar(i + '0');
	}
	_putchar('\n');
}
