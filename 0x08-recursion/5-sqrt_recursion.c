#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of
 *                   a number through recursion.
 * @n: The number whose natural square root is to
 *     be returned.
 *
 * Return: The square root of n.
 */
int _sqrt_recursion(int n)
{
	int guess = n / 2;
	int error = (guess * guess) - n;

	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);

	if (error == 0)
		return (guess);
	else if (error > 0)
		return (_sqrt_recursion(n - 1));
	else
		return (_sqrt_recursion(n + 1));
}
