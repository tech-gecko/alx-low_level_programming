#include "main.h"

/**
 * _print_rev_recursion - Recursively prints a string in reverse.
 * @s: Pointer-to-string to be printed.
 *
 * Return: Nothing.
 */
void _print_rev_recursion(char *s)
{
	char *p = s;
	p = s[sizeof(s) - 2];

	if (*p = s[0])
	{
		_putchar('\n');
		return;
	}
	_putchar(*p);
	_print_rev_recursion(s - 1);
}


	
