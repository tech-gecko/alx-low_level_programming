#include "main.h"

/**
 * _strspn - Returns number of bytes of s that contains
 *           only bytes from accept before any different
 *           byte is seen
 * @s: String to be checked
 * @accept: Sub-string of chars to be checked for
 *
 * Return: Number of initial bytes that match
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;
	int j = 0;
	char *p = s;
	char *a = accept;

	while (*s != '\0')
	{
		for (i = 0; *accept != '\0'; i++)
		{
			if (p[j] == a[i])
				n++;
		}
		j++;
	}
	return (n);
}
