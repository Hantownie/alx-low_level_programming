#include "main.h"
/**
 * print_alphabet - this prints out lowercase alphabets
 * Function - this prints lowercase alphabet
*/
void print_alphabet(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		_putchar(al);
	}
	_putchar('\n');
}
