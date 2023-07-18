#include "main.h"
/**
 * main - entry level
 * Description - this prints lowercase alphabet
 * Return: 0 success
*/
int main(void)
{
	int al;

	for (al = 'a'; al <= 'z'; al++)
	{
		_putchar(al);
	}
	_putchar('\n');
	return (0);
}
