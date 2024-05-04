#include "main.h"

/**
 * more_numbers - Prints 0 to 14 (10 times), followed by a new line.
 *
 *Return: Nothing.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
