#include "main.h"
/**
 * *_strncpy - a function that copies string
 * @dest: destination
 * @src: string to copy
 * @n: number of bytes
 * Return: string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
