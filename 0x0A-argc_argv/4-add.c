#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * check - checks if string is digit
 * @s: string
 * Return: int
*/
int check(char *s)
{
	unsigned int c = 0;

	while (c < strlen(s))
	{
		if (!isdigit(s[c]))
		{
			return (0);
		}
		c++;
	}
	return (1);
}
/**
 * main - entry level
 * @argc: argument count
 * @argv: argument vector
 * Description - this prints multiplication
 * Return: 0 success
*/
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;
	int convert;

	while (i < argc)
	{
		if (check(argv[i]))
		{
			convert = atoi(argv[i]);
			sum += convert;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
