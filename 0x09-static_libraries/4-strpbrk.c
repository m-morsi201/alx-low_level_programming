#include "main.h"

/**
 **_strpbrk - is a function that searches a string for any of a set of bytes.
 * @s: it is a string.
 * @accept: it is a string.
 * Return: p
*/

char *_strpbrk(char *s, char *accept)
{
	int m, r;
	char *p;

	m = 0;

	while (s[m] != '\0')
	{
		r = 0;
		while (accept[r] != '\0')
		{
			if (accept[r] == s[m])
			{
				p = &s[m];
				return (p);
			}
			r++;
		}
		m++;
	}
	return (0);
}
