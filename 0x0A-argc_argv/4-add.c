#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

int is_positive_number(char *s);

/**
 * main - Prints the sum of positive integers entered after a command.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 for success
 *         1 if error is encountered.
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc <= 1)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!is_positive_number(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}

/**
 * is_positive_number - Checks if input number is positive.
 * @s: Pointer-to-string to be checked.
 *
 * Return: 0 if negative
 *         1 if positive.
 */
int is_positive_number(char *s)
{
	while (*s != '\0')
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}
