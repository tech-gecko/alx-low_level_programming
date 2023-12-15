#include "main.h"

/**
 * _puts - Prints a string with _putchar
 * @str: String variable to be printed
 *
 * Return: Always 0 (success)
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}


