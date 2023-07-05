#include "main.h"

/**
 * factorial - it is a function that returns the factorial of a given number.
 * @n: it is a given numer.
 * Return: -1, 1, factorial of n.
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
