#include "main.h"

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest
 * @dest: Destination memory area
 * @src: Source memory area
 * @n: Number of bytes to be copied
 *
 * Return: memory area dest after copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *final = dest;

	while (i < n)
	{
		if (*src != '\0')
		{
			dest[i] = src[i];
		}
		i++;
	}
	return (final);
}

