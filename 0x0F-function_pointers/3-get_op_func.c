#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Selects the correct function to perform
 * @s: The operator passed
 *
 * Return: A pointer to the function corresponding
 *         to the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t sign[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int i = 0;

	while (sign[i].op != NULL && *(sign[i].op) != *s)
		i++;
	return (sign[i].f);
}
