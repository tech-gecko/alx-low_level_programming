#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates the two strings, with s2 after s1.
 * @s1: First string, destination.
 * @s2: Second string, source.
 * @n: number of elements to be copied.
 *
 * Description: if n is >= length of s2, copy full s2
 *              else, copy the first n s2 elements.
 * Return: Bigger string with s1 before s2, concatenated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ps1s2;
	unsigned int i, j, l1 = 0, l2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	if (n >= l2)
	{
		ps1s2 = malloc(sizeof(char) * (l1 + l2 + 1));
		if (ps1s2 == NULL)
			return (NULL);
		for (i = 0; i < l1; i++)
			ps1s2[i] = s1[i];
		for (j = 0; j < l2; j++)
			ps1s2[i + j] = s2[j];
	}
	else
	{
		ps1s2 = malloc(sizeof(char) * (l1 + n + 1));
		if (ps1s2 == NULL)
			return (NULL);
		for (i = 0; i < l1; i++)
			ps1s2[i] = s1[i];
		for (j = 0; j < n; j++)
			ps1s2[i + j] = s2[j];
	}
	ps1s2[i + j] = '\0';
	return (ps1s2);
	free(ps1s2);
}
