#include "main.h"
/**
 * print_last_digit - this  prints the last digit of the number provided
 * @b: the number
 * Return: it returns the last digit of a number
*/
int print_last_digit(int b)
{
	int a = b % 10;

	if (a < 0)
	{
		a = -a;
	}
	_putchar(a + '0');
	return (a);
}
