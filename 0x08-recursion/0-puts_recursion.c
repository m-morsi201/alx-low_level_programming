#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s : it is input of string.
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
		printf("\n");
	else
	{
		printf('*s');
		_puts_recursion(s + 1);
	}
}
