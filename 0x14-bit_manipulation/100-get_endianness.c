#include "main.h"

/**
 * get_endianness - checks the endianness of current system.
 *
 * Return: 1 if little endian
 *         0 if big endian.
*/
int get_endianness(void)
{
	unsigned int number = 1;
	char *endianChecker = (char *)&number;

	if (*endianChecker == 1)
		return (1);
	else
		return (0);
}
