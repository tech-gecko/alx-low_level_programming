#include "main.h"
#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of 612852475143,
 *        followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	long i;
	long n = 612852475143;
	long largest = -1;

	while (n % 2 == 0)
	{
		largest = 2;
		n /= 2;
	}

	for (i = 3; i <= n / i; i += 2)
	{
		while (n % i == 0)
		{
			largest = i;
			n /= i;
		}
	}

	if (n > 2)
		largest = n;

	return (largest);
}
