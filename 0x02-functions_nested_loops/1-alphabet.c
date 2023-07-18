#include "main.h"
/**
 * main - prints alphabet
 * Description - this prints lowercase alphabet
 * Return: 0 success
*/
int main(void)
{
	int al;

	for (al = 'a'; al <= 'z'; al++)
	{
		print_alphabet(_putchar(al));
	}
	_putchar('\n');
	return (0);
}
