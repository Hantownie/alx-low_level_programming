#include "main.h"
/**
 * print_most_numbers - this prints numbers 0 to 9 except 2 and 4
 * Return: it returns zero to nine with exception
*/
void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a == 2 || a == 4)
		{
		}
		else
		{
			_putchar(a + '0');
		}
	}
}
