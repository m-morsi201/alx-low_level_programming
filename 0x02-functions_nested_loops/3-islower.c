#include "main.h"

/**
 * _islower - function to check if c is lowercase or less
 *
 * @c: it is the input
 *
 * Return: 1 if lowercase and 0 otherwise.
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
