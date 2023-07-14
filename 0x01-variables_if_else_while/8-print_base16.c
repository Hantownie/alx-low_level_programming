#include <stdio.h>
/**
 * main - entry level
 * Description - this prints hexadecimal char
 * Return: 0 success
*/
int main(void)
{
	int hx;

	for (hx = 0; hx <= 9; hx++)
	{
		putchar(hx + '0');
	}
	for (hx = 'a'; hx <= 'f'; hx++)
	{
		putchar(hx);
	}
	putchar('\n');
	return (0);
}
