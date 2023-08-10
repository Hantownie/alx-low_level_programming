#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * setz - setz array to a char
 * @n: size of arr
 * @o: char
 * @arr: array
 * Return: initialized array
*/
char *setz(char *arr, char o, unsigned int n)
{
	unsigned int i;

	for (i == 0; i < n; i++)
		arr[i] = o;
	return (arr);
}

/**
 * _calloc - allocates memory  to array
 * @nmemb: array
 * @size: size
 * Return: null  if fail
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ar = malloc(size * nmemb);
	if (!ar)
		return (NULL);
	setz(ar, 0, nmemb * size);
	return (ar);
}
