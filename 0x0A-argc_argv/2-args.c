#include <stdio.h>

/**
 * main - entry level
 * @argc: argument count
 * @argv: argument vector
 * Description - this prints all arguments passed
 * Return: 0 success
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
