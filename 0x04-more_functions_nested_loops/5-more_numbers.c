#include "main.h"

/**
 * more_numbers - Prints 0 to 14 (10 times), followed by a new line.
 *
 *Return: Nothing.
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (int i = 0; i <= 14; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
