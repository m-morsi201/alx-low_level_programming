#include "main.h"

/**
 * *_strdup - function that returns a pointer allocated space in memory.
 * @str: it is a string.
 * Return: 0 .
*/

char *_strdup(char *str)
{
	int m = 0;
	int s = 0;
	char *r;

	if (str == NULL)
	{
		return (NULL);
	}

	for (; str[s] != '\0'; s++)
		;

	r = malloc(s * sizeof(*str) + 1);

	if (r == 0)
	{
		return (NULL);
	}
	else
	{
		for (; m < s; m++)
			r[m] = str[m];
	}
	return (r);
}
