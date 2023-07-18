#include "main.h"
/**
 * _isalpha - this checks if the character case is alphabet
 * @c: the character
 * Return: it returns zero or one
*/
int _isalpha(int c)
{
	if (c > 96 && c <= 122 || c > 64 && c <= 90)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
