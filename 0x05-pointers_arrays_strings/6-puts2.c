#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string,
 * starting from the first character
 * @str: String in question
 *
 * Return: Always 0 (success)
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i / 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
