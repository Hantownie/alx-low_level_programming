#include "main.h"
/**
 * _strchr - points to the first location a character appears
 * @s: memory
 * @c: character
 * Return: string
*/
char *_strchr(char *s, char c)
{
	int i;
		for (i = 0; s[i] >= '\0'; i++)
		{
			if (s[i] == c)
				return (s + i);
		}
		return ('\0');
}
