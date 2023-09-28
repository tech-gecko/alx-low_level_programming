#include "main.h"

/**
 * _print_rev_recursion - Recursively prints a string in reverse.
 * @s: Pointer-to-string to be printed.
 *
 * Return: Nothing.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}


	
