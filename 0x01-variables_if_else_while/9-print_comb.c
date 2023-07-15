#include <stdio.h>
/**
 * main - entry level
 * Description - this prints single digit number
 * Return: 0 success
*/
int main(void)
{
	int di;

	for (di = 0; di <= 9; di++)
	{
		putchar(di + '0');
		if (di < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
