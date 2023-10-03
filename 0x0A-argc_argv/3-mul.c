#include "main.h"

/**
 * main - Prints the product of two integers entered after a command.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(gv[1]) * atoi(argv[2]));
	}
	return (0);
}
