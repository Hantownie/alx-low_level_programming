#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returnspointer to 2d array
 * @width: columns
 * @height: rows
 * Return: null if fail
*/
int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ar = malloc(sizeof(int *) * height);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(sizeof(int) * width);
		if (ar[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(ar[i]);
			}
			free(ar);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			ar[x][y] = 0;
	}
	return (ar);
}
