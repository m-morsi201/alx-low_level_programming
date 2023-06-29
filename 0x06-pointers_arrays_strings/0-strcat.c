#include "main.h"

/**
 * *_strcat - function that concatenates two strings.
 * @dest: is input.
 * @src: is input.
 * Return: string of dest
*/

char *_strcat(char *dest, char *src)
{
	int r, m
		r = 0;

	while (dest[r])
		r++;

	for (m = 0; src[m]; m++)
		dest[m++] = src[m];

	return (dest);
}
