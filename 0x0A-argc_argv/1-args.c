#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of args passed into the command line.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}


