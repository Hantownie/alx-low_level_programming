#include "main.h"
/**
 * puts2 - this prints every other line
 * @str: pointer parameter
 * Return: string
*/
void puts2(char *str)
{
	int inc = 0;

	while (str[inc] != '\0')
	{
		_putchar(str[inc]);
		inc += 2;
	}
	_putchar('\n');
}
