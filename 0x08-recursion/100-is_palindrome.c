#include "main.h"
/**
 * _strlen_recursion - puts a stringin reverse with recursion
 * @s: string
 * Return: int
*/
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
#include "main.h"
/**
 * pcheck - check if string is palindrome
 * @s: string
 * @in: index
 * @l: length of string
 * Return: 0 and 1
*/
int pcheck(int in, int l, char *s)
{
	if (l > 0)
	{
		if (s[in] == s[l])
		{
			return (pcheck(in + 1, l - 1, s));
		}
		else if (s[in] != s[l])
		{
			return (0);
		}
		else
			return (1);
	}
	return (1);
}

/**
 * is_palindrome - checks if sring is a palindrome
 * @s: string
 * Return: 0 or 1
*/
int is_palindrome(char *s)
{
	return (pcheck(0, _strlen_recursion(s) - 1, s));
}
