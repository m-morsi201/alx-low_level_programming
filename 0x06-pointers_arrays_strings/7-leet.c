#include "main.h"

/**
 * leet - encodes a string into 1337
 * @c: string
 * Return: string that is encodes
*/

char *leet(char *m)
{
	char *cp = m;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int r;

        while (*m)
	{
		for (r = 0; r < sizeof(key) / sizeof(char); r++)
		{
			if (*m == key[r] || *m == key[r] + 32)
			{
				*m = 48 + value[r];
			}
			m++;
		}
		return (cp);
