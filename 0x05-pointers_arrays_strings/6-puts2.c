#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting from the first character
 * @str: String in question
 *
 * Return: Always 0 (success)
 */
void puts2(char *str)
{
	for (int i = 0; i != '\0'; i++)
	{
		if (i / 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
