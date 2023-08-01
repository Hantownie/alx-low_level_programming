#include "main.h"
/**
 * _strpbrk - searches a string for sets of bytes
 * @s: string
 * @accept: bytes
 * Return: string
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
