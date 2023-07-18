#include "main.h"
/**
 * print_alphabet_x10 - this prints out lowercase alphabets ten times
*/
void print_alphabet_x10(void)
{
	int a;
	char al;

	for (a = 0; a < 10; a++)
	{
		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}
		_putchar('\n');
	}
}
