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
	int l = 0;
	int i = 0;

	if (str == NULL)
		return (NULL);
	while (str[l] != '\0')
		l++;
	p = (char *)malloc(sizeof(char) * (l + 1));
	if (p == NULL)
		return (NULL);
	while (*str != '\0')
	{
		p[i] = str[i];
		i++;
	}
	p[l] = '\0';
	return (p);
	free(p);
}
