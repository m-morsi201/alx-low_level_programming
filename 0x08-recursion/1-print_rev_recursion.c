#include "main.h"

/**
 * _print_rev_recursion - it is the function that prints a string in reverse.
 * @s: it is a pointer of string.
*/

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
