#include "main.h"
#include <string.h>

/**
 * _strlen - Returns the length of a string
 * @s: String in question
 *
 * Return: Always 0 (success)
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
