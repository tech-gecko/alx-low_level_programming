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
	char *result = dest;

	while (*result != '\0')
		result++;
	while (*src != '\0')
	{
		*result = *src;
		result++;
		src++;
	}
	*result = '\0';
	return (dest);
}
