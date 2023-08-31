#include "main.h"

/**
 * flip_bits - counts the number of bits to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, num = 0;
	unsigned long int tee;
	unsigned long int temp = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		tee = temp >> i;
		if (tee & 1)
			num++;
	}
	return (num);
}
