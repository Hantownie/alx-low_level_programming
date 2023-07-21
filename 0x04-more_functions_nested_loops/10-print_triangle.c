#include "main.h"
/**
 * print_triangle - this prints a triangle
 * @size: size of triangle
 * Return: void
*/
void print_triangle(int size)
{
	int l, sh, sp;

	if (size > 0)
	{
		for (l = 1; l <= size; l++)
		{
			for (sp = size - l; sp >= 1; sp--)
			{
				_putchar(' ');
			}
			for (sh = 1; sh <= l; sh++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
