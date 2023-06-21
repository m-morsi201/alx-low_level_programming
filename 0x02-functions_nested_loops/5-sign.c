#include "main.h"

/**
 * print_sign -this funs to print sign to the inupt if it + or - or zero.
 *
 * @n: it is the input to check it.
 *
 * Return: 1 if it +, 0 if it zero, -1 if -.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
