#include "main.h"
/**
 * primechck - checks if number is prime
 * @num: number
 * @pr: factor
 * Return: 0 and 1
*/
int primechck(int num, int pr)
{
	if (pr < num)
	{
		if (num % pr == 0)
		{
			return (0);
		}
		else
			return (primechck(num, pr + 1));
	}
	else
		return (1);
}

/**
 * is_prime_number - identifies prime number
 * @n: number
 * Return: 0 and 1
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (primechck(n, 2));
}
