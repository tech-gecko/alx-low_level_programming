#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of string s to uppercase
 * @s: String in question
 *
 * Return: NULL
 */
char *string_toupper(char *s)
{
	int i = 0;

	for (i = 0; *s != '\0'; i++)
	{
		if (*s[i] >= 'a' && *s[i] <= 'z')
			_putchar(*s[i] - 32);
	}
}
