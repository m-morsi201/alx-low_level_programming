#include "main.h"

/**
 * _pow_recursion - function that returns the value of x power of y.
 * @x: is the number.
 * @y: is a power of number.
 * Return: -1, 1, x powered of y.
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
