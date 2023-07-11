#include "main.h"

/**
 * strl - it is function to find length of string.
 * @l: it is a string.
 * Return: size.
*/

int strl(char *l)
{
	int s = 0;

	for (; l[s] != '\0'; s++)
		;
	return (s);
}

/**
 * *str_concat - it is  function that concatenates two strings.
 * @s1: it is a str 1.
 * @s2: it is a str 2.
 * Return: m
*/

char *str_concat(char *s1, char *s2)
{
	int S1, S2, r;
	char *m;

	if (s1 == NULL)
	{
		s1 = "\0";
	}
	if (s2 == NULL)
	{
		s2 = "\0";
	}

	S1 = strl(s1);
	S2 = strl(s2);
	m = malloc((S1 + S2) * sizeof(char) + 1);
	if (m == 0)
	{
		return (0);
	}

	for (r = 0; r <= S1 + S2; r++)
	{
		if (r < S1)
			m[r] = s1[r];
		else
			m[r] = s2[r - S1];
	}
	m[r] = '\0';

	return (m);
}
