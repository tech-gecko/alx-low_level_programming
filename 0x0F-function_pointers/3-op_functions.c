#include "3-calc.h"

/**
 * op_add - Returns the sum of two integers.
 * @a: First int.
 * @b: Second int.
 *
 * Return: Their sum.
 */
int op_add(int a, int b)
{
	int res;

	res = a + b;
	return (res);
}

/**
 * op_sub - Returns the difference of two ints.
 * @a: First int.
 * @b: Second int.
 *
 * Return: a - b.
 */
int op_sub(int a, int b)
{
	int res;

	res = a - b;
	return (res);
}

/**
 * op_mul - Returns the product of two ints.
 * @a: First int.
 * @b: Second int.
 *
 * Return: Their product.
 */
int op_mul(int a, int b)
{
	int res;

	res = a * b;
	return (res);
}

/**
 * op_div - Returns the quotient of two ints.
 * @a: First int.
 * @b: Second int.
 *
 * Return: a / b.
 */
int op_div(int a, int b)
{
	int res;

	res = a / b;
	return (res);
}

/**
 * op_mod - Returns the modulus of two ints.
 * @a: First int.
 * @b: Second int.
 *
 * Return: a % b.
 */
int op_mod(int a, int b)
{
	int res;

	res = a % b;
	return (res);
}
