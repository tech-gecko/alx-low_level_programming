#include <stdio.h>

/**
 * main - Entry point, prints a-z, except q and e
 * @i - initializes to a for the loop
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'e')
		{
			if (i != 'q')
			{
				putchar(i);
				i++;
			}
		}
	}
	return (0);
}
