#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integer
 * @min: minimun
 * @max: maximum
 * Return: null  if fail
*/
int *array_range(int min, int max)
{
	int *ar;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ar = malloc(sizeof(int) * size);
	if (!ar)
		return (NULL);
	for (i = 0; min <= max; i++)
		ar[i] = min++;
	return (ar);
}
