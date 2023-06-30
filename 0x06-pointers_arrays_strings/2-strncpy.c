#include "main.h"

/**
 * *_strncpy -  function that copy two strings.
 * @dest: is an input.
 * @src: is an input.
 * @n: is number of char.
 * Return: string of dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int m;

	for (m = 0; m < n && src[m] != '\0'; m++)
		dest[m] = src[m];

	while (m < n)
	{
		dest[m] = '\0';
		m++;
	}
	return (dest);
}
