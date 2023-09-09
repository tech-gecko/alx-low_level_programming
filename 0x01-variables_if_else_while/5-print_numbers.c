#include <stdio.h>

/**
 * main - Entry point, prints 0-9
 * @i - initializer, count
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	return (0);
}
