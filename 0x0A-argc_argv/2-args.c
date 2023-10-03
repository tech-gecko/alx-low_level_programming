#include <stdio.h>
#include "main.h"

/**
 * main - Prints all arguments typed into the command line.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
		return (0);
	}
}
