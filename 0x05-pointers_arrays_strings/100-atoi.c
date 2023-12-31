#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string
 * Return: converted string
 */
int _atoi(char *s)
{
	int i = 0;
	int dig = 0;
	int len = 0;
	int b = 0;
	int n = 0;
	int z = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (i < len && z == 0)
	{
		if (s[i] == '-')
		{
			++b;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			dig = s[i] - '0';
			if (b % 2)
			{
				dig = -dig;
			}
			n = n * 10 + dig;
			z = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
			z = 0;
		}
		i++;
	}
	if (z == 0)
		return (0);

	return (n);
}
