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
	int i;

	for (i = 0; *s1 != '\0' && *s2 != '\0'; i++)
	{
		if (*s1[i] < *s2[i])
			return (-1);
		else if (*s1[i] == *s2[i])
			return (0);
		else
			return (1);
	}
}
