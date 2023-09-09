#include <stdio.h>

/**
 * main - Entry point, prints a-z, then A-Z
 * @i - initialized to 'a' to start lowercase loop
 * @j - initialized to 'A' to start uppercase loop
 *
 * Return: Always 0 (Positive)
 */
int main(void)
{
	char i = 'a';
	char j = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (j  <= 'Z')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
