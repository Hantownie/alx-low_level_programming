#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry level
 * @argc: argument count
 * @argv: argument vector
 * Description - this prints cent change
 * Return: 0 success
*/
int main(int argc, char *argv[])
{
	int change[] = {25, 10, 5, 2, 1};
	int cents;
	int res = 0;
	int i;
	int loop = sizeof(change) / sizeof(change[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < loop && cents > 0; i++)
	{
		while (cents >= change[i])
		{
			res++;
			cents -= change[i];
		}
	}
	printf("%d\n", res);
	return (0);
}
