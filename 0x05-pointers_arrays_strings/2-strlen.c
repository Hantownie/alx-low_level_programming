#include "main.h"
/**
 * _strlen - this returns length of string
 * @s: pointer parameter
 * Return: it returns length of string
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
