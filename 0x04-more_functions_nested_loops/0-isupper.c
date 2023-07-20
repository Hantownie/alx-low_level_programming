#include "main.h"
/**
 * _isupper - this checks if the character case is uppercase
 * @c: the character
 * Return: it returns zero or one
*/
int _isupper(int c)
{
	if (c > 64 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
