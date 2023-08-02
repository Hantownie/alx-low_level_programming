#include "main.h"
/**
 * sqrtchck - squareroot checker
 * @v: number
 * @sq: squareroot
 * Return: int
*/
int sqrtchck(int v, int sq)
{
	if ((sq * sq) == v)
		return (sq);
	else if ((sq * sq) > v)
		return (-1);
	else
		return (sqrtchck(v, sq + 1));
}

/**
 * _sqrt_recursion - prints natural squareroot of a number
 * @n: number
 * Return: int
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrtchck(n, 0));
}
