#include "main.h"
/**
 * puts_half - this prints half of a line
 * @str: pointer parameter
 * Return: string
*/
void puts_half(char *str)
{
	int a, b;
	int inc = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		inc++;
	}
	b = (inc / 2);
	if ((inc % 2) == 1)
	{
		b = ((inc + 1) / 2);
	}
	for (a = b; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
