#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - random number printer
 * Description - this prints the random number
 * Return: 0 success
*/
/* betty style doc for function main goes there */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d %s", n, "is positive\n");
	}
	else if (n == 0)
	{
		printf("%d %s", n, "is zero\n");
	}
	else
	{
		printf("%d %s", n, "is negative\n");
	}
	return (0);
}
