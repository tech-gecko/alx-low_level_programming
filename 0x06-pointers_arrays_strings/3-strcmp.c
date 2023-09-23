#include "main.h"

/**
 * _strcmp - Returns a value according to the comparison of two input strings
 * @s1: First string
 * @s2: Second string
 *
 * Description: Returns a number less than, greater than or equal to zero
 * if s1 is less than, greater than or equal to s2, respectively.
 * Return: -1, 0 or 1(according to comparison)
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1[i] == *s2[i])
			return (0);
		else
			return (*s1 - *s2);
		s1++;
		s2++;
	}
}
