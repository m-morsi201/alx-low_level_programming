#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number.
 * @n: is input.
 * @non_n:is input.
 * Return: 1 if the input integer is a prime number.
*/

int if_prime(int n, int non_n);
int is_prime_number(int n)
{
	return (if_prime(n, 2));
}

/**
 * if_prime - check if number is prime number.
 * @n: is input.
 * @non_n: is input.
 * Return: 1 or zero .
*/

int if_prime(int n, int non_n)
{
	if (non_n >= n && n >= 2)
	{
		return (1);
	}
	else if (n % non_n == 0 || n <= 1)
		return (0);
	else
		return (if_prime(n, non_n + 1));
}
