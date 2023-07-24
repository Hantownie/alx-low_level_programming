#include "main.h"
/**
 * puts2 - this prints every other line
 * @str: pointer parameter
 * Return: string
*/
void puts2(char *str)
{
	int inc = 0;
	int d = 0;
	char *e = str;
	int i;

	while (*e != '\0')
	{
		e++;
		inc++;
	}
	d = inc - 1;
	for (i = 0; i <= d; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
