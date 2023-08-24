#include "variadic_functions.h"

/**
 * sum_them_all - it is a function that returns the sum of all its parameters.
 * @n: it is a number of arguments.
 * @...: it is an arguments.
 * Return: 0 if n == 0 or t if else.
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int r, t;

	if (n == 0)
		return (0)

	t = 0;

	va_list argusn;

	va_start(argusn, n);

	for (r = 0; r < n; r++)
	{
		t += va_arg(argusn, unsigned int);
	}
	va_end;

	return (s);


}
