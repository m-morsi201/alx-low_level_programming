#include "main.h"

/**
 * leet - encodes a string into 1337
 * @m: string
 * Return: string that is encodes
*/

char *leet(char *m)
{
	char *cp = m;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*m)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{

			if (*m == key[i] || *m == key[i] + 32)
			{
				*m = 48 + value[i];
			}
		}

	m++;
	}

	return (cp);
}
