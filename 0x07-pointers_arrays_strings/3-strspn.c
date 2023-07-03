#include "main.h"

/**
 * _strspn - it is an function that gets the length of a prefix substring.
 * @s: it is a string.
 * @accept: is a bytes.
 * Return: r
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int m, r;

	for (m = 0; s[m] != '\0'; m++)
	{
		for (r = 0; accept[r] != s[m]; r++)
		{
			if (accept[r] == '\0')
			{
				return (r);
			}
		}
	}
	return (r);
}
