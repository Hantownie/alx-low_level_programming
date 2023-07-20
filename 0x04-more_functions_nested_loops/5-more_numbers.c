#include "main.h"
/**
 * more_numbers - this prints numbers 0 to 14 ten times
 * Return: it returns zero to fourteen ten times
*/
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			_putchar(b + '0');
		}
		_putchar('\n');
	}
}
