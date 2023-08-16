#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function on each array element
 * @array: array
 * @size: size of array
 * @action: pointer to print
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
