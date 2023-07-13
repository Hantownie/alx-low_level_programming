#include <stdio.h>
/**
 * main - entry point
 * Return: zero
*/
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", Sizeof(char));
	printf("Size of a int: %lu byte(s)\n", Sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", Sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", Sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", Sizeof(float));
	return (0);
}
