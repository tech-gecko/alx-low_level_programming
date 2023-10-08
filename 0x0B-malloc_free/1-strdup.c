#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates string "str" into a newly allocated
 *           memory space.
 * @str: String to be duplicated.
 *
 * Return: Resulting array after duplication.
 */
char *_strdup(char *str)
{
	char *p;

	if (str == NULL)
		return (NULL);
	p = malloc(sizeof(char) * (sizeof(str)/sizeof(str[0])));
	if (p == NULL)
		return (NULL);
	while (*str != '\0')
	{
		*p = *str;
		str++;
		p++;
	}
	p = '\0';
	return (p);
	free(p);
}
