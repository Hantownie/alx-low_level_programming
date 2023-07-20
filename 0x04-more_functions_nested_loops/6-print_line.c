#include "main.h"
/**
 * print_line - this prints a straightline
 * @n: number of lines
 * Return: void
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	else
	{
		-putchar('\n');
	}

}