#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @s: String in question
 *
 * Return: NULL
 */
char *cap_string(char *s)
{
	int i;
	char *p = s;

	bool isSeparator(char c)
	{
		int j;
		char separators[] = " \t\n,;.!?\"(){}";

		for (j = 0; separators[j] != '\0'; j++)
		{
			if (c == separators[j])
				return (true);
			else
				return (false);
		}
	}

	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
			*p = *p - ('a' - 'A');
		for (i = 1; *p != '\0'; i++)
		{
			if ((isSeparator(*p[i - 1])) && (*p[i] >= 'a' && *p <= 'z'))
				*p = *p - ('a' - 'A');
		}
	}
	return (s);
}
