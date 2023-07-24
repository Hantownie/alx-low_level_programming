#include "main.h"
/**
 * rev_string - reverses string
 * @s: pointer parameter
 * Return: string
*/
void rev_string(char *s)
{
	char temp = s[0];
	int count = 0;
	int a;

	while (s[count] != '\0')
		count++;
	for (a = 0; a < count; a++)
	{
		count--;
		temp = s[a];
		s[a] = s[count];
		s[count] = temp;
	}
}
