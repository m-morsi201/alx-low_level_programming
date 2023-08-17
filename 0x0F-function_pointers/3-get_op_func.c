#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/***/

int (*get_op_func(char *s))(int, int)
{
	op_t op_s[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int m;

	m = 0;

	while (op_s[m].op)
	{
		if (*(op_s[m].op) == *s)
			return (op_s[m].f);
		m++;
	}
	return (NULL);
}
