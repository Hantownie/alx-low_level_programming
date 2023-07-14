#include <stdio.h>
/**
 * main - entry level
 * Description - this prints alphabets in lower case
 * Return: 0 success
*/
int main(void)
{
	char al;

	for (al = 'z'; al >= 'a'; al--)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
