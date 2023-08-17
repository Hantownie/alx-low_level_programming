#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return:sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list par;
	unsigned int i, res = 0;

	va_start(par, n);
	for (i = 0; i < n; i++)
		res += va_arg(par, int);
	va_end(par);
	return (res);
}
