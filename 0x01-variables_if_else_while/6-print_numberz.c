#include <stdio.h>

/**
 * main - Entry point, prints 0-9 using putchar()
 * @i - initializer, count
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	return (0);
}
