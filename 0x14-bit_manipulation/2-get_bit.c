#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: it is an unsigned int as input.
 * @index: is the index, starting from 0 of the bit you want to get.
 * Return: the value of the bit at index.
 *	or -1 if an error occured .
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int m;

	if (n == 0 && index < 64)
		return (0);

	for (m = 0; m <= 63; n >>= 1, m++)
	{
		if (index == m)
		{
			return (m & 1);
		}
	}

	return (-1);
}
