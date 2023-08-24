#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings.
 * @n: is a number of argument.
 * @...: it is an input string argument
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int r;
	va_list argus;
	char *ptr;

	ptr = va_arg(argus, char *);

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(argus, n);

	for (r = 0; r < n; r++)
	{
		if (ptr == NULL)
		{
			printf("(nil)");
			break;
		}
		printf("%s", ptr);
		if (n == r + 1)
		{
			break;
		}
		printf("%s", separator);
	}
	va_end(argus);
	printf("\n");
}
