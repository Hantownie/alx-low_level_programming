#include <stdio.h>
/**
 * main - entry level
 * Description - this prints numbers from zero to base 10
 * Return: 0 success
*/
int main(void)
{
	int di;

	for (di = 0; di < 10; di++)
	{
		putchar(di + '0');
	}
	putchar('\n');
	return (0);
}
