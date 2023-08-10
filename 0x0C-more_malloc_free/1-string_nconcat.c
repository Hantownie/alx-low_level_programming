#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - cocatenates n number of string
 * @n: number of str to copy
 * @s1: string 1
 * @s2: string 2
 * Return: null  if fail
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1 = 0, l2 = 0, i = 0, j = 0;
	char *ar;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;
	if (n < l2)
		ar = malloc(sizeof(char) * (l1 + n + 1));
	else
		ar = malloc(sizeof(char) * (l1 + l2 + 1));
	if (!ar)
		return (NULL);
	while (i < l1)
	{
		ar[i] = s1[i];
		i++;
	}
	while (n < l2 && i < (l1 + n))
		ar[i++] = s2[j++];
	while (n >= l2 && i < (l1 + l2))
		ar[i++] = s2[j++];
	ar[i] = '\0';
	return (ar);
}
