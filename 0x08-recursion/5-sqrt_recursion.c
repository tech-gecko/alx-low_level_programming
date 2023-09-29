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
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (sqrt_guesser(n, 1));
}

/**
* sqrt_guesser - Guesses the natural square root.
* @n: Number whose SQRT is to be guessed.
* @guess: Guess, starting from 1 till INT_MAX.
*
* Return: The square root after guessing succeeds.
*/
int sqrt_guesser(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess < n)
		return (sqrt_guesser(n, guess + 1));
}
