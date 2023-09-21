#include "main.h"

/**
 * _strncpy - Copies maximum of n elements of string src to buffer dest
 * @src: source string
 * @dest: destination buffer
 * @n: Maximum number of bytes to be copied
 *
 * Return: Destination buffer after copying is done
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *val = dest;
	int i = 0;

	while (i < n && *src != '\0')
	{
		*dest[i] = *src[i];
		dest++;
		src++;
	}
	*dest = '\0';
	return (val);
}
