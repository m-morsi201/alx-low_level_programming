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
		printf("(nil)");
	}
	va_start(argusl, format);
	vprintf(format, argusl);
	va_end(argusl);
}

/**
 * main - it is the entry point.
 * Return: nothing.
*/

int main(void)
{
	print_all("format, argusl");
	printf("\n");
	return (0);
}
