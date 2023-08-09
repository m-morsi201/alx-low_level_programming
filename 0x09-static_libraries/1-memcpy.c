#include "main.h"

/**
 * *_memcpy - it is a function that copies memory area.
 * @dest: is an arry.
 * @src: it is an source.
 * @n: it is an number to copy.
 * Return: dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}
