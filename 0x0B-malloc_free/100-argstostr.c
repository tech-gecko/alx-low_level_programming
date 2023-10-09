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
	int i, j, k = 0, l = 1, m = 0;
	char **p;
	int arglength = ac - 1;

	if (ac == 0 || av == NULL)
		return (NULL);
	p = malloc(sizeof(char *) * ac);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < arglength - 1; i++)
	{
		p[i] = malloc(sizeof(char) * sizeof(av[i + 1]));
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(p[j]);
			return (NULL);
		}
	}
	while (k < (sizeof(av[1]) - 1))
	{
		p[0][k] = av[1][k];
		k++;
	}
	while (l < arglength - 1)
	{
		p[l][k + m] = av[l + 1][m];
		l++;
		m++;
	}
	p[l][k + m] = '\0';
	return (p);
	free(p);
}
