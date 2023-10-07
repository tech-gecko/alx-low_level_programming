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
	for (i = 0; *str != '\0'; i++)
	{
		p++ = str++;
	}
	return (p);
	free(p);
}
