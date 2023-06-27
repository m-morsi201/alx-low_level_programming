#include "main.h"

/**
 * *_strcpy -  that copies the string pointed.
 * @dest: is a input.
 * @src: is a input.
 * Return: dest.
*/

char *_strcpy(char *dest, char *src)
{
	int s = -1;

	do {
		s++;
		dest[s] = scr[s];
	} while (scr[s] != '\0');

	return (dest);
}
