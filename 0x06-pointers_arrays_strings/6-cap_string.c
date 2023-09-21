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

	if (*s[0] >= 97 && *s[0] <= 122)
		*s[0] = *s[0] - 32;
	for (i = 1; *s[i] != '\0'; i++)
	{
		if ((isSeparator(*s[i - 1])) && (*s[i] >= 97 && *s[i] <= 122))
			*s[i] = *s[i] - 32;
	}
}
