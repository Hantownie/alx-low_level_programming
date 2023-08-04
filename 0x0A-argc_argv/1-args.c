#include <stdio.h>

/**
 * main - entry level
 * @argc: argument count
 * @argv: argument vector
 * Description - this prints number of arguments passed into it
 * Return: 0 success
*/
int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc);
	return (0);
}
