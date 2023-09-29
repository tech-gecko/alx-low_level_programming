#include "main.h"

/**
 * is_palindrome - checks if input string is a
 *                 palindrome or not.
 * @s: string to be checked.
 *
 * Return: 1 if string is a palindrome
 *         0 if not.
 */
int is_palindrome(char *s)
{
	if (_puts(s) == _print_rev(s))
		return (1);
	else
		return (0);
}

/**
 * _puts - Recursively prints all characters of a string.
 * @s: Pointer-to-string whose characters
 *     are to be printed.                                   *
 * Return: Nothing.
 */
void _puts(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_puts(s + 1);
}

/**
 * _print_rev - Recursively prints a string in reverse.
 * @s: Pointer-to-string to be printed.
 *
 * Return: Nothing.
 */
void _print_rev(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev(s + 1);
	_putchar(*s);
}
