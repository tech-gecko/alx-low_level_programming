#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Function that prints numbers from n to 98
 * @n: Starting number
 *
 * Return: NULL
 */
void print_to_98(int n)
{
	int n;

	if (n <= 98)
	{
		int i = n;

		while (i <= 98)
		{
			printf("%d", i);
			if (i < 98)
				printf(", ");
			i++;
		}
	}
	else
	{
		int i = n;

		while (i >= 98)
		{
			printf("%d", i);
			if (i < 98)
				printf(", ");
			i++;
		}
	}
	printf("\n");
}
