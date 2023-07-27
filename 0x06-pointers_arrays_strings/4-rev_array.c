#include "main.h"
/**
 * reverse_array - a function to reverse array
 * @a: array
 * @n: number of elements
 * Return: reversed array
*/
void reverse_array(int *a, int n)
{
	int c, b;

	for (c = 0; c < n--; c++)
	{
		b = a[c];
		a[c] = a[n];
		a[n] = b;
	}
}
