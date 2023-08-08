#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array -creates an array of chars and initializes it
 * @size: size of array
 * @c: array
 * Return: null if fail
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	ar = malloc(sizeof(char) * size);
	if (size == 0 || ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}
