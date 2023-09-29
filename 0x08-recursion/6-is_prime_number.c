#include "main.h"

/**
 * is_prime_number - Returns 1 if argument is prime,
 *                   returns 0 if not.
 * @n: The number to be checked for primeness.
 *
 * Return: 1 if prime, 0 if not.
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	else if (n == 0 || n == 1)
		return (0);
	else
		return (prime_check(n, 2));
}

/**
 * prime_check - Actually checks if the number is
 *               prime or not.
 * @n: Number whose primeness is to be checked.
 * @d: divisiblity checker argument.
 *
 * Return: 1 if prime, 0 if not.
 */
int prime_check(int n, int d)
{
	if (n % d == 0)
	{
		if (n == d)
			return (1);
		else
			return (0);
	}
	else
		return (prime_check(n, d + 1));
}
