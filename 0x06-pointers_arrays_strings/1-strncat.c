#include "main.h"
/**
 * *_strncat - a function that cocatenates string
 * @dest: destination
 * @src: string to join
 * @n: number of bytes
 * Return: string
*/
char *_strncat(char *dest, char *src, int n)
{
	int a  = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < n && src[b] != '\0')
	{
		dest[a] += src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
