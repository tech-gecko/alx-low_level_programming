#include <stdio.h>

/**
 * main - Entry point, prints 0-9 using putchar()
 * @i - initializer, count
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	return (0);
	putchar('\n');
}
