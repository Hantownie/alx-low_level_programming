#include "main.h"
/**
 * _isdigit - this checks if the character is digit
 * @c: the character
 * Return: it returns zero or one
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
