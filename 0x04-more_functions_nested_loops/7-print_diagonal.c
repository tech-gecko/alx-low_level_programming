#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: The number of times "\" is printed.
 *
 *Return: Nothing.
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');
			for (int j = 0; j < i; j++)
			{
				_putchar(' ');
			}
		}
	}
	return;
}
