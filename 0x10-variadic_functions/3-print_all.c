#include "variadic_functions.h"

/**
 * print_all - it is a function that prints anything.
 * @format:  is a list of types of arguments passed to the function.
 * @...: it an arguments.
*/

void print_all(const char * const format, ...)
{
	va_list argusl;

	if (format == NULL)
	{
		printf("(nill)");
	}
	va_start(argusl, format);
	vprintf(format, argusl);
	va_end(argusl);
	printf("\n");
}
