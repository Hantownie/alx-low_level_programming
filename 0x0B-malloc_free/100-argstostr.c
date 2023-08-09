#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - cocatenates all arguments of the program
 * @ac: argument count
 * @av: argument vector
 * Return: null if fail
*/
char *argstostr(int ac, char **av)
{
	int i, j;
	int o = 0;
	int k = 0;
	char *ar;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			o++;
	}
	o += ac;
	ar = malloc(sizeof(char) * (o + 1));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ar[k] = av[i][j];
			k++;
		}
		ar[k] = '\n';
		k++;
	}
	ar[k] = '\0';
	return (ar);
}
