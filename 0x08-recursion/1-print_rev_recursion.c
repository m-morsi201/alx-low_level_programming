#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: it is a input of string.
*/

void _print_rev_recursion(char *s)
{
	if (s > '\0')
	{
		putchar(*s);
		_print_rev_recursion(s + 1);
	}
}
