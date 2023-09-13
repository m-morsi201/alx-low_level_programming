#include "main.h"

/**
 * flip_bits - that returns the number of bits you would need to flip.
 * @n: number of bit.
 * @m: munber as input.
 * Return: it will return (f)
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int f;
	unsigned long int x, s;

	f = 0;
	x = (n ^ m);
	s = 0x01;

	while (s <= x)
	{
		if (s & x)
		{
			f++;
		}
		else
		{
			s <<= 1;
		}
	}
	return (f);
}
