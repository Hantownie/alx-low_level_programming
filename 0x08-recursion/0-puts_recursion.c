#include "main.h"
/**
 * _puts_recursion - puts a string with recursion
 * @s: character
 * Return: void
*/
void _puts_recursion(char *s)
{
	if (c == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*c);
	_puts_recursion(s + 1);
}
