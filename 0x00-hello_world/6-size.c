#include <stdio.h>
/**
 * main - entry point
 * Return: zero
*/
int main(void)
{
	long long int c;

	printf("Size of a char: %lu byte(s)\n", (unsigned long) Sizeof(char));
	printf("Size of a int: %lu byte(s)\n", (unsigned long) Sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)  Sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)  Sizeof(c));
	printf("Size of a float: %lu byte(s)\n", (unsigned long) Sizeof(float));
	return (0);
}
