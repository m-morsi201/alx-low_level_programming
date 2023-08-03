#include "main.h"

/**
 * is_prime_number -  function return 1 if the input is a prime number.
 * @n: it is input.
 * @non: it is input.
 * Return: 1 if it prime, 0 if not.
*/

int if_prime(int n, int non);
int is_prime_number(int n)
{
	return (if_prime(n, 2));
}

/**
 * if_prime - to check if it prime or not.
 * @n: it is input.
 * @non: it is input.
 * Return: 1 if it prime, 0 if not.
*/

int if_prime(int n, int non)
{
	if (non >= n && n > 1)
		return (1);
	if (n % non == 0 || n <= 1)
		return (0);
	return (if_prime(n, non + 1));
}
