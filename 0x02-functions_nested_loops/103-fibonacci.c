#include <stdio.h>

/**
 * main - print the sum of even fibonacci numbers from 1 and 2
 * Return: 0
 */

int main(void)
{
	int f = 0;
	long a = 1;
	long b = 2;
	long sum = b;

	while (b + a < 4000000)
	{
		b = a + b;
		if (b % 2 == 0)
		{
			sum = sum + b;
		}
		a = b - a;
		f++;
	}
	printf("%ld\n", sum);
	return (0);
}
