#include "main.h"

/**
 * *_memset - It is function that fills memory with a constant byte.
 * @s: is a pointer.
 * @n: is a number of bytes.
 * @b: is a char.
 * Return: s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; n > 0; m++, n--)
	{
		s[m] = b;
	}

	return (s);
}
