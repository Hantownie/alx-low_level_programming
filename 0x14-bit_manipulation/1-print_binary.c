#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, num = 0;
	unsigned long int tee;

	for (i = 63; i >= 0; i--)
	{
		tee = n >> i;
		if (tee & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');

	}
	if (!num)
		_putchar('0');
}
