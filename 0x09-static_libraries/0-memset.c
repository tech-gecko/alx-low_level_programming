#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area pointed to by s with b
 * @s: Pointer
 * @b: Constant byte
 * @n: number of bytes to be replaced
 *
 * Return: pointer to pointer-s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *pma = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (pma);
}
