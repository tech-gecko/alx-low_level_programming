#include "main.h"

/**
 * main - Prints 1 to 100, replacing multiples of 3 with "Fizz",
 *        multiples of 5 with "Buzz", and multiples of both with
 *        "FizzBuzz".
 *
 * Return: Always 0.
 */
int main(void)
{
	for (i = 0; 1 < 100, i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
	}
	return (0);
}