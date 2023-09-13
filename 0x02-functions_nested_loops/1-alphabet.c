#include "main.h"

/**
 * print_alphabet - prints a-z, followed by a new line
 *@i - initializer to 'a'
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return;
}
