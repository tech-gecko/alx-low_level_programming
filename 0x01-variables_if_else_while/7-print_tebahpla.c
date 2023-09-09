#include <stdio.h>

/**
 * main - Entry point, prints z-a
 * @i - initializer, count
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
