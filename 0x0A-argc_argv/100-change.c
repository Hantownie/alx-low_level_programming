#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - entry level
 * @argc: argument count
 * @argv: argument vector
 * Description - this prints multiplication
 * Return: 0 success
*/
int main(int argc, char *argv[])
{
	int cents[] = {25, 10, 5, 2, 1};
	int n = atoi(argv[1]);
	int res = 1;
	int i;

	if (n < 0)
	{
		printf("%d\n", 0);
	}
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; i < 5 && n >= 0; i++)
	{
		while (n > cents[i])
		{
			res++;
			num -= cents[i];
		}
	}
	printf("%d\n", res);
	return (0);
}
