#include "main.h"

/**
 * _abs - computes the absolute value of a given integer
 * @a: identifier/argument representing the integer
 *
 * Return: Absolute value of the integer
 */
int _abs(int a)
{
	int i;

	if (i > 0)
	{
		return (i);
	}
	else if (i == 0)
	{
		return (0);
	}
	else
	{
		return (i * -1);
	}
}
