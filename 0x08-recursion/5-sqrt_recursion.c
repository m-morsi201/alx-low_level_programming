#include "main.h"

/**
 * _sqrt_recursion - a function returns the natural square root of a number.
 * @n: it is a input number.
 * Return:  the natural square root of a number.
*/
int square(int n, int m);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - function that print square root of a number.
 * @m: square of number.
 * @n: it is input number.
 * Return: the square of number.
*/

int square(int n, int m)
{
	if (m * m == n)
	{
		return (m);
	}
	else if (m * m < n)
	{
		return (square(n, m + 1));
	}
	return (-1);
}
