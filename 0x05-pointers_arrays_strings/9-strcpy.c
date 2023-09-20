#include "main.h"

/**
 * _strcpy - Copies elements of string src to buffer dest
 * @src: source string
 * @dest: destination buffer
 *
 * Return: Always 0 (success)
 */
char *_strcpy(char *dest, char *src)
{
	char *val = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (val);
}
