#include "main.h"

/**
 * factorial - it is a function that returns the factorial of a given number.
 * @n: is a given number (input).
 * Return: -1 if n = -1, 1 if n = 0, factorial n.
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n == 0)
		{
			return (1);
		}
	}
	n = n * factorial(n - 1);
	return (n);
}
