#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed
 */
void print_all(const char * const format, ...)
{
	va_list par;
	char *poi, *com = "";
	int i;

	va_start(par, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", com, va_arg(par, int));
					break;
				case 'i':
					printf("%s%d", com, va_arg(par, int));
					break;
				case 'f':
					printf("%s%f", com, va_arg(par, double));
					break;
				case 's':
					poi = va_arg(par, char *);
					if (!poi)
						poi = "(str)";
					printf("%s%s", com, poi);
					break;
				default:
					i++;
					continue;
			}
			com = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(par);
}
