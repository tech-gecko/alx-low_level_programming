#include "main.h"
#include <string.h>

/**
 * print_rev - Prints input string, in reverse
 * @s: String in question
 *
 * Return: Always 0 (success)
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(*s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
