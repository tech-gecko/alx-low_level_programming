#include "main.h"
#include <string.h>

/**
 * rev_string - Reverses a string
 * @s: String in question
 *
 * Return: Always 0 (success)
 */
void rev_string(char *s)
{
	int length = strlen(s);
	int i;
	char temp;

	for (i = 0; i < (length) / 2; i++)
	{
		temp = s[i];
		s[i] = s[(length - 1) - i];
		s[(length - 1) - i] = temp;
	}
}

