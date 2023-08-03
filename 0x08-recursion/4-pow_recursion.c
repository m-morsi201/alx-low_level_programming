#include "main.h"

/**
 * _pow_recursion - function returns the value of x raised to the power of y.
 * @x: it is a base.
 * @y: it is a power.
 * Return: -1 if y < 0, 1 if y = 0, x if y >= 1 .
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	x = x * _pow_recursion(x, y - 1);
	return (x);
}
