#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int
 * Return: 98 if fail
*/
void *malloc_checked(unsigned int b)
{
	unsigned int *c;

	c = malloc(sizeof(unsigned int));
	if (c == NULL)
		exit(98);
	return (c);
}
