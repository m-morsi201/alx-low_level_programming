#include "main.h"

/**
 * *string_nconcat - function that concatenates two strings.
 * @s1: it is string.
 * @s2: it is string.
 * @n: it is maximum number of byte.
 * Return: NULL or con.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con;
	unsigned int l, m;

	l = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (m = 0; s1[m]; m++)
		l++;

	con = malloc((l + 1) * sizeof(char));
	if (con == NULL)
		return (NULL);
	l = 0;

	for (m = 0; s1[m]; m++)
		con[l++] = s1[m];

	for (m = 0; s2[m] && m < n; m++)
		con[l++] = s2[m];
	con[l] = '\0';
	return (con);
}
