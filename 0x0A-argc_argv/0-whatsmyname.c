#include "main.h"

/**
 * main - Prints the name of any program or command sent into the command line.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
