#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates all arguments of your program.
 * @ac: Argument count.
 * @av: Argument vector.
 *
 * Return: Pointer to string of all concatenated args.
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int l1 = 0, l2 = 0, lTotal1 = 0, lTotal2 = 0, lTotal;
	char *args;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		lTotal2++;
	}
	for (l1 = 0; av[i][l1] != '\0'; l1++)
	{
		lTotal1++;
	}

	lTotal = lTotal1 * lTotal2;
	args = (char *)malloc(sizeof(char) * (lTotal + 1));

	if (args == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		while (av[i][l2] != '\0')
		{
			args[j] = av[i][l2];
			j++;
			l2++;
		}
			args[j] = '\n';
			j++;
	}
	args[j] = '\0';
	return (args);
	free(args);
}
