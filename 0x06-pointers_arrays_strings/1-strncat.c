#include "main.h"

/**
 * _strncat - Concatenates at most n bytes of src to dest
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes to be concatenated
 *
 * Return: Destination string after concatenation
 */
char *_strncat(char *dest, char *src, int n)
{
	char *source = src;
	char *result = dest;

	while (n > 0 && *src != '\0')
	{
		*result = *source;
		result++;
		source++;
		n--;
	}
	*result = '\0';
	return (dest);
}
