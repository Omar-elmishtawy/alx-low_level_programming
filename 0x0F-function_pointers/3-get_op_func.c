#include "3-calc.h"
#include "3-op_functions.c"

/**
 * get_op_func - dhajkdjad
 * @s: sadd
 * Return: sdadas
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 6)
	{
		if (s[0]  == ops[i].op[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
