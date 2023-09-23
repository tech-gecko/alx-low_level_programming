#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of string s to uppercase
 * @s: String in question
 *
 * Return: NULL
 */
char *string_toupper(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
			*p = *p - ('a' - 'A');
		p++;
	}
	return (s);
}
