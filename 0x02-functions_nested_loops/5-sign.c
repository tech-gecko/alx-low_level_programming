#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: Identifier/argument for the number
 *
 * Return: Returns 1 if positive
 * Returns 0 if zero
 * Returns -1 if negative
 */
int print_sign(int n)
{
	int n;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
