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
	int dest_len = sizeof(*dest);
	char *result = dest;
	int i = dest_len - 1;
	int j = 0;

	while (j <= n - 1 && *src != '\0')
	{
		*dest[i] = *src[j];
		i++;
		j++;
	}
	*dest = '\0';
	return (result);
}
