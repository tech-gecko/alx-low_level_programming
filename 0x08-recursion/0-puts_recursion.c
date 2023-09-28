#include "main.h"

/**
 * _puts_recursion - Recursively prints all characters of a string.
 * @s: Pointer-to-string whose characters are to be printed.
 *
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else if (s == 0)
	{
		_putchar(s);
		_puts_recursion(s + 1);
	}
}

