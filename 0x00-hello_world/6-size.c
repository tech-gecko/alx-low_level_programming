#include <stdio.h>

/**
 * main - Entry point. Function prints a string using %s
 *
 * Description: This function prints the text in quotes.
 * It replaces the %d with the result from corresponding sizeof result.
 * Return: NULL
 */
int main(void)
{
	printf(8"Size of a char: %ls byte(s)\nSize of an int: %ls byte(s)\nSize of a long int: %ls byte(s)\nSize of a long long int: %ls byte(s)\nSize of a float: %ls byte(s)", sizeof(char), sizeof(int), sizeof(long), sizeof(long long), sizeof(float));
	return (0);
}
