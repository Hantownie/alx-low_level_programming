#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry level
 * @argc: argument count
 * @argv: argument vector
 * Description - this prints multiplication
 * Return: 0 success
*/
int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul += atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
