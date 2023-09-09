#include <stdio.h>

/**
 * main - Entry point, prints 0-9 with commas using putchar()
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
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	return (0);
}
