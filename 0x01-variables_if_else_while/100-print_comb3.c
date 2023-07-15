#include <stdio.h>
/**
 * main - entry level
 * Description - this prints double  digit number combinations
 * Return: 0 success
*/
int main(void)
{
	int nor, mor;

	for (nor = 0; nor <= 8; nor++)
	{
		for (mor = 0; mor <= 9; mor++)
		{
			putchar(nor + '0');
			putchar (mor + '0');
			if (nor < 8 || j < 9)
			{
				putchar(',');
				putchar(' ');
			}

		}
	}
	putchar('\n');
	return (0);
}
