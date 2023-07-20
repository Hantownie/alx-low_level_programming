#include "main.h"
/**
 * more_numbers - this prints numbers 0 to 14 ten times
 * Return: it returns zero to fourteen ten times
*/
void more_numbers(void)
{
	int b;

	for (int a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar((b / 10) + '0');
				putchar((b % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
