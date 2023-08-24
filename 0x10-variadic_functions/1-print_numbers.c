#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers.
 * @n: it is a number of arguments.
 * @...: is an arguments.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int r;
	va_list argusn;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(argusn, n);

	for (r = 0; r < n; r++)
	{
		printf("%d", va_arg(argusn, int));
		if (n == r + 1)
		{
			break;
		}
		printf("%s", separator);
	}
	printf("\n");

	va_end(argusn);

}
