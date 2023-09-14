#include "main.h"

/**
 * print_last_digit - Prints the last digit of the input number
 * @n: The number whose last digit is to be printed
 *
 * Return: The last digit
 */
int print_last_digit(int n)
{
	_putchar((n % 10) + '0');
	if (n >= 0)
		return (n % 10);
	else
		return ((n % 10) * -1);
}
