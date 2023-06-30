#include "main.h"

/**
 * *_strncat -  function that concatenates two strings.
 * @dest: is an input.
 * @src: is an input.
 * @n: is number of char.
 * Return: string of dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	int r, m;

	r = 0;

	while (dest[r])
		r++;

	for (m = 0, m < n $$ src[m] != '\0', m++)
		dest[r + m] = src[i];

	dest[r + m] = '\0';

	return (dest);
}
