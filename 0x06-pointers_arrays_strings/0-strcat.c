#include "main.h"
/**
 * *_strcat - a function that cocatenates string
 * @dest: destination
 * @src: string to join
 * Return: string
*/
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] += src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
