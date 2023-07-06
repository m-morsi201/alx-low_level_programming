#include "main.h"

/**
 * _sqrt_recursion - a function returns the natural square root of a number.
 * @n: it is a input number.
 * Return:  the natural square root of a number.
*/

int sqrt(int n, int m);
int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}

/**
 * sqrt - function that print square root of a number.
 * @m: square of number.
 * @n: it is input number.
 * Return: the square of number.
*/

int sqrt(int n, int m)
{
	if (n == m ^ 2)
	{
		return (m);
	}
	else if (n > m ^ 2)
	{
		return (sqrt(n, m + 1));
	}
	return (-1);
}
