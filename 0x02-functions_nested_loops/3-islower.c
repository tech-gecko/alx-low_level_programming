#include "main.h"

/**
 * _islower - checks if a given input character is lowercase or not
 * @c: the argument for the character to be checked
 *
 * Return: 1 if lowercase, 0 if not
 */
int _islower(int c)
{
	int i;
	
	if (i >= 'a' && i <= 'z')
		return (1);
	else
		return (0);
}
