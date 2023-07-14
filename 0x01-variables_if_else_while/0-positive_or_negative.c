#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* random number printing*/

/*
 * main - print random number
 * return: 0
*/
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
