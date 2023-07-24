#include "main.h"
/**
 * swap_int - this swaps two integers
 * @a: pointer parameter
 * @b: pointer parameter
 * Return: it returns swapped int
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
