#include "main.h"

/**
 * _strcat - Concatenates source string to the back of the destination string
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Destination string after concatenation
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = sizeof(*dest);
	char *result = dest;
	int i = dest_len - 1;
	int j = 0;

	while (*src != '\0')
	{
		*dest[i] = *src[j];
		i++;
		j++;
	}
	*dest = '\0';
	return (result);
}
