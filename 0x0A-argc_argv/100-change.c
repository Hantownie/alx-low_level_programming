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
	int cents = atoi(argv[1]);
	int res = 0;
	int i;

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; i < 5 && cents > 0; i++)
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
