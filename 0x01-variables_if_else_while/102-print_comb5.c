#include <stdio.h>
/**
 * main - entry level
 * Description - this prints triple digit number combinations
 * Return: 0 success
*/
int main(void)
{
	int a, b;

	for (a = 0; a <= 98; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			int f1 = a / 10;
			int f2 = a % 10;
			int f3 = b / 10;
			int f4 = b % 10;

			putchar(f1 + '0');
			putchar(f2 + '0');
			putchar(' ');
			putchar(f3 + '0');
			putchar(f4 + '0');
			if (a == 98 && b == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
