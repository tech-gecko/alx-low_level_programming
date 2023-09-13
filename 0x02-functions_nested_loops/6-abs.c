#include "main.h"

/**
 * _abs - computes the absolute value of a given integer
 * @a: identifier/argument representing the integer
 *
 * Return: Absolute value of the integer
 */
int _abs(int a)
{
	int a;

	if (a > 0)
	{
		return (a);
	}
	else if (a == 0)
	{
		return (0);
	}
	else
	{
		return (a * -1);
	}
}
