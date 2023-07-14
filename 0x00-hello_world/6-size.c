#include <stdio.h>
/**
 * main - entry point
 * Return: zero
*/
int main(void)
{
	int i;
	char c;
	float f;
	long int li;
	long long int lil;

	printf("Size of a char: %lu byte(s)\n", (unsigned long) Sizeof(c));
	printf("Size of a int: %lu byte(s)\n", (unsigned long) Sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)  Sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)  Sizeof(lil));
	printf("Size of a float: %lu byte(s)\n", (unsigned long) Sizeof(f));
	return (0);
}
