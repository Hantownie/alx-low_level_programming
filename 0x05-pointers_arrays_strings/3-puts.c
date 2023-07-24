#include "main.h"
/**
 * _puts - prints a string then newline
 * @str: pointer parameter
 * Return: string
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
