#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - entry level
 * Description - this prints a random number
 * Return: 0 success
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %d is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is 0\n", n);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is less than 6 and not 0\n", n);
	}
	return (0);
}
