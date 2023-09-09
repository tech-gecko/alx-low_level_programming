#include <stdio.h>

/**
 * main - Entry point, prints hexadecimal characters
 * @i - initializer and count for 0-9
 * @j - initializer and count for a-f
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char i = '0';
	char j = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (j <= 'f')
	{
		putchar(j);
		j++;
	}
	return (0);
}
