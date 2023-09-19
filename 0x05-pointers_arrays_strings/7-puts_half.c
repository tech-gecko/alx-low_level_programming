#include "main.h"
#include <string.h>

/**
 * puts_half - Prints the second half of a string
 * @str: String in question
 *
 * Return: Always 0 (success)
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int i;
	int n = (length - 1) / 2;

	for (i = 0; i < length; i++)
	{
		if (length / 2 != 0)
		{
			if (i > (length - n) - 1)
				_putchar(str[i]);
		}
		else
		{
			if (i >= (length / 2) - 1)
				_putchar(str[i]);
		}
	}
	_putchar('\n');
}


