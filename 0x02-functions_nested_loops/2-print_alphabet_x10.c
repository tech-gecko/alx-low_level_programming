#include "main.h"

/**
 * print_alphabet_x10 - prints 10 'a-z's in 10 different lines
 * @i - initializer for newline characters
 * @j - initializer for lowercase alphabets
 *
 * Return: Always 0
 */
void print_alphabet_x10(void);
{
	int i = 0;

	while (i < 10)
	{
		int j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
	return (0);
}
