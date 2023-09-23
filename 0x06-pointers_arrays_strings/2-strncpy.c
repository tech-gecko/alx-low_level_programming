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

	while (i < n &&)
	{
		if (*src != '\0')
		{
			*val = *src;
			src++;
		}
		else
		{
			*val = '\0';
		}
		val++;
		i++;
	}
	return (dest);
}
