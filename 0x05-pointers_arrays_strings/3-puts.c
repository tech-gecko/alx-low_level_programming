#include "main.h"

/**
 * _puts - Prints a string with _putchar
 * @str: String variable to be printed
 * @i: Index of the for loop
 *
 * Return: Always 0 (success)
 */
void _puts(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{	
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}


