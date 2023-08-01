#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: memory
 * @b: constant byte
 * @n: number to fill
 * Return: string
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
