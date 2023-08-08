#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - creates a copy of the string passed into it
 * @str: string
 * Return: null if fail
*/
char *_strdup(char *str)
{
	char *c;
	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		i++;

	}
	c = malloc(sizeof(char) * (i + 1));
	if (c == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		str[j] = c[j];
	return (c);
}
