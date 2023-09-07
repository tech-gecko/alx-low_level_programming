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
	printf("Size of a char: %d byte(s)\nSize of an int: %d byte(s)\nSize of a long int: %d byte(s)\nSize of a long long int: %d byte(s)\nSize of a float: %d byte(s)", sizeof(char), sizeof(int), sizeof(long), sizeof(long long), sizeof(float));
	return (0);
}
