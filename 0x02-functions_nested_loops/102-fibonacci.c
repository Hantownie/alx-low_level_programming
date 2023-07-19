#include <stdio.h>

/**
 * main - prins the first 50 fibonacci numbers from 1 and 2
 * Return: 0
 */

int main(void)
{
	int f;
	long a = 1;
	long b = 2;

	for (f = 0; f < 50; f++)
	{
		if (f == 0)
		{
			printf("%ld", a);
		}
		else if (f == 1)
		{
			printf(", %ld", b);
		}
		else
		{
			b = a + b;
			a = b - a;
			printf(", %d", b);
		}
	}
	printf("\n");
	return (0);
}
