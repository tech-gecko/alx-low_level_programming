#include <stdio.h>

/**
 * main - 3 digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = i + 2; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i == 7 && j == 8 && k == 9)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}
