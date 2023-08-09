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
	int m, r;

	r = 0;

	if ((s1 == NULL) & (s2 == NULL))
	{
		return (NULL);
	}

	for (m = 0; s1[m]; m++)
	{
		r++;
	}

	for (m = 0; s2[m]; m++)
	{
		r++;
	}

	con = malloc((r + 1) * sizeof(char));

	if (con == NULL)
	{
		return (NULL);
	}

	for (m = 0; s1[m]; m++)
	{
		con[m - 1] = s1[m];
	}

	for (; s2[m]; m++)
	{
		con[m - 1] = s2[m];
	}

	return (con);
}
