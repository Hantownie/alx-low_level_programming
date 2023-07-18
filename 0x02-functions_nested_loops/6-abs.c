#include "main.h"
/**
 * _abs - this prints the absolute value of a number
 * @n: the character
 * Return: it returns positive or negative number
*/
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		_putchar('-');
		return (n);
	}
}
