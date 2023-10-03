#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
	int sum;

	for (i = 1; i < argc; i++)
	{
		if (!(*argv[i] < '0' || *argv[i] > '9'))
		{
			printf("Error\n");
			return (1);
		}
		else if (argc <= 1)
			printf("%d\n", 0);
		else if (argc > 1)
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
