#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s: is the input of string.
 * Return: 0.
*/

void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	putchar('\n');
}

int main(void)
{
	_puts_recursion(*s);
	return (0);
}
