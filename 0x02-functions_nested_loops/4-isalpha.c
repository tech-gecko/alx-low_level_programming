#include "main.h"

/**
 * _isalpha - checks if a given input character is a letter or not
 * @c: the argument for the character to be checked
 *
 * Return: 1 if it's a letter, 0 if not
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
