#include <stdio.h>
/**
 * main - entry level
 * Description - this prints alphabets in lower case except two
 * Return: 0 success
*/
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		if (al != 'q' && al != 'e')
		{
			putchar(al);
		}
	}
	putchar('\n');
	return (0);
}
