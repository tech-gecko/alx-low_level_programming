#include "function_pointers.h"

/**
 * print_name - Prints "name".
 * @name: Pointer to string to be printed.
 * @f: Pointer to print function.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	void (*p)(char *);

	if (name == NULL || f == NULL)
		return;
	p = f;
	p(name);
}
