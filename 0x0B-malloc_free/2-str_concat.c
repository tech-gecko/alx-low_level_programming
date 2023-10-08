#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates the two strings, with s2 after s1.
 * @s1: First string, destination.
 * @s2: Second string, source.
 *
 * Return: Bigger string with s1 before s2, concatenated.
 */
char *str_concat(char *s1, char *s2)
{
	int l1, l2;
	char *ps1s2 = s1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	ps1s2 = malloc((sizeof(char) * (l1 + l2)) + 1);
	if (ps1s2 == NULL)
		return (NULL);
	while (*ps1s2 != '\0')
		ps1s2++;
	while (*s2 != '\0')
	{
		*ps1s2 = *s2;
		ps1s2++;
		s2++;
	}
	ps1s2 = '\0';
	return (ps1s2);
	free(ps1s2);
}
