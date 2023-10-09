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
	int l1 = 0, l2 = 0, lTotal = 0;
	char *args;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (l1 = 0; av[i][l1] != '\0'; l1++)
		{
			lTotal++;
		}
		lTotal++;
	}

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
