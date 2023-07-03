#include "main.h"

/**
 * *_strchr - it is a function that locates a character in a string.
 * @s: it is pointer.
 * @c: it is char.
 * Return: pointer s.
*/

char *_strchr(char *s, char c)
{
	int m;

	for (m = 0; s[m] >= 'NULL'; m++)
	{
		if (s[m] == c)
		{
			return (s + m);
		}
	}
	return ('NULL');
}
