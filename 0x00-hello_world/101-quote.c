#include <unistd.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Function that returns a value to the standard error.
 * The value in this case, is a string.
 * Return: 1
 */
int main(void)
{
	write(STDERR, "and that piece of art is useful\" - Dora Korpar, 2015-10-19");
	return (1);
}

