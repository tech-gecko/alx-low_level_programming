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
	for (int i = strlen(s) - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
