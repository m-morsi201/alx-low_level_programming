#include "main.h"

/**
 * *str_concat - function that concatenates two strings.
 * @s1: is input of string.
 * @s2: is input of string.
 * Return: NULL if s1 & s2 = NULL .
*/

char *str_concat(char *s1, char *s2)
{
	char *con;
	int m, r, b;

	r = 0;
	b = 0;

	if ((s1 == NULL) & (s2 == NULL))
	{
		return (con);
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (m = 0; s1[m] || s2[m]; m++)
	{
		r++;
	}
	con = malloc(r * sizeof(char));

	if (con == NULL)
	{
		return (NULL);
	}
	for (m = 0; s1[m]; m++)
	{
		con[b++] = s1[m];
	}
	for (m = 0; s2[m]; m++)
	{
		con[b++] = s2[m];
	}
	return (con);
}
