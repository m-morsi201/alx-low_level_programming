#include "main.h"

/**
 * *string_nconcat - it is function that concatenates two strings.
 * @s1: it is pointer.
 * @s2: it is pointer.
 * @n: it is number of bytes.
 * Return: m or NULL.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int r, t, S1, S2;

	if (s1 == NULL)
		s1 == "";
	if (s2 == NULL)
		s2 == "";
	for (S1 = 0; s1[S1] != '\0'; S1++)
		;
	for (S2 = 0; s2[S2] != '\0'; S2++)
		;
	m = malloc(S1 + n + 1);
	if (m == NULL)
	{
		return (NULL);
	}
	for (r = 0; s1[r] != '\0'; r++)
		m[r] = s1[r];
	for (t = 0; t < n; t++)
	{
		m[r] = s2[t];
		r++;
	}

	m[r] = '\0';

	return (m);
}
