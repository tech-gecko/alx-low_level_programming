#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry Point
 *@n - random numbers are generated and assigned to this variable
 *
 *Description: A loop telling the program user of the sign of n
 *Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative", n);
	else if (n > 0)
		printf("%d is positive", n);
	else
		printf("%d is zero", n);
	return (0);
}
