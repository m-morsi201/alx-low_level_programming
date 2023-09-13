#include "main.h"

/**
 * flip_bits - that returns the number of bits you would need to flip.
 * @n: number of bit.
 * @m: munber as input.
 * Return: it will return (f)
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int f, x, s;

	f = 0;

	while (!(n == 0 && m == 0))
	{
		x = n & 1;
		s = m & 1;
		n = n >> 1;
		m = m >> 1;

		if (s != x)
		{
			f++;
		}

	}
	return (f);
}
