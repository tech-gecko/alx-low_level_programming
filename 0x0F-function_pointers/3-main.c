#include "3-calc.h"

/**
 * main - Prints the result of operation.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0.
*/
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	char *sign;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	sign = argv[2];
	num2 = atoi(argv[3]);
	if (((*sign == '/') && (num2 == 0)) || ((*sign == '%') && (num2 == 0)))
	{
		printf("Error\n");
		exit(100);
	}
	func = get_op_func(sign);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", func(num1, num2));
	return (0);
}
