#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: is a number input.
 * @v: is a munber to test if it natural.
 * Return: -1 if it not natural, v if it natural.
*/

int SQ(int n, int v);

int _sqrt_recursion(int n)
{
	return (SQ(n, 1));
}

/**
 * SQ - it is a funtion to squre the number .
 * @n: is a number input.
 * @v: is a munber to test if it natural.
 * Return: -1 if it not natural, v if it natural.
 */

int SQ(int n, int v)
{
	if (v * v == n)
	{
		return (v);
	}
	if (v * v < n)
	{
		return (SQ(n, v + 1));
	}
	return (-1)
}
