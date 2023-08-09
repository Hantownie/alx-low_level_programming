#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees space allocated by function
 * @grid: array
 * @height: rows
 * Return: null if fail
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
