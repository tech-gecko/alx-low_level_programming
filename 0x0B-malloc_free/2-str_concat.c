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
	int i = 0, j = 0;
	char *ps1s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	ps1s2 = malloc(sizeof(char) * (l1 + l2 + 1));
	if (ps1s2 == NULL)
		return (NULL);
	while (i < l1)
	{
		ps1s2[i] = s1[i];
		i++;
	}
	while (j < l2)
	{
		ps1s2[i + j] = s2[j];
		j++;
	}
	ps1s2[i + j] = '\0';
	return (ps1s2);
	free(ps1s2);
}
