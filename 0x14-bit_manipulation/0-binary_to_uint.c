#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to the binary number.
 *
 * Return: The result of conversion, or
 *         0 if b is NULL or contains non-binary chars.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted_num = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			converted_num = (converted_num << 1) + (*b - '0');
			b++;
		}
		else
			return (0);
	}
	return (converted_num);
}
