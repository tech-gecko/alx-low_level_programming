#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: string to look from
 * @c: character to look for
 * Return: pointer to first occurence
 *	   NULL if not present
*/

char *_strchr(char *s, char c)
{
	char *p = s;

	while (*p != '\0')
	{
		if (*p == c)
		{
			return (p);
		}
		p++;
	}
	return (NULL);
}
