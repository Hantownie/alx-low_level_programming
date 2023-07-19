#include "main.h"
/**
 * print_times_table - prints the time table from 0-15
 * @n: integer
*/
void print_times_table(int n)
{
	int a, c, e;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (c = 1; c <= n; c++)
			{
				_putchar(',');
				_putchar(' ');
				e = a * c;
				if (e <= 99)
				{
					_putchar(' ');
				}
				if (e <= 9)
				{
					_putchar(' ');
				}
				if (e >= 100)
				{
					_putchar((e / 100) + '0');
					_putchar((e / 10) % 10 + '0');
				}
				else if (e <= 99 && e >= 10)
				{
					_putchar((e / 10) + '0');
				}
				_putchar((e % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
