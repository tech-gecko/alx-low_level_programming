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
	int i;

	if (str == NULL)
		return (NULL);
	p = malloc(sizeof(char) * sizeof(str));
	while (*str != '\0')
	{
		*p = *str;
		str++;
		p++;
	}
	return (p);
	free(p);
}
