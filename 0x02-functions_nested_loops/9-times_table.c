#include "main.h"
/**
 * times_table - prints one to nine times table
 * Return: it returns the multiploes of zero to nine
*/
void times_table(void)
{
	int i, t;

	for (i = 0; i <= 9; i++)
	{
		for (t = 0; t <= 9; t++)
		{
			int tbl = i * t;

			if (tbl < 10)
			{
				_putchar((tbl % 10) + '0');
			}
			else
			{
				_putchar((tbl / 10) + '0');
				_putchar((tbl % 10) + '0');
			}
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
