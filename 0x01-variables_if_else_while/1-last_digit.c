#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 * @n - generated random number
 * @a - variable holding last digit of n
 *
 *Description: The function prints the last digit of n.
 *It also gives some info on the last digit
 *Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	if (a > 5)
		printf("Last digit of %d is %d and is greater than 5", n, a);
	else if (a == 0)
		printf("Last digit of %d is %d and is 0", n, a);
	else if (a < 6 && a != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, a);
	printf("\n");
	return (0);
}
