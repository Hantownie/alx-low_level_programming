#include "main.h"
/**
 * _islower - this checks if the character case is lower
 * @c: the character
 * Return: it returns zero or one
*/
int _islower(int c)
{
	if (c > 96 && c <= 122)
	{
		_putchar(1);
	}
	else
	{
		_putchar(0);
	}

}
