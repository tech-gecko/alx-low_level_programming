#include "main.h"

/**
 * _atoi - Convert string to integer
 * @s: Pointer to the string to convert
 * Return: The converted integer value or 0 if the conversion fails
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == ' ')
	{
		s++;
	}
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	result *= sign;
	return (result);
}

