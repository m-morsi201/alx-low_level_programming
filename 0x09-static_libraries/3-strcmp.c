#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: is input of string.
 * @s2: is input of string.
 * Return: e the output of compares
*/

int _strcmp(char *s1, char *s2)
{
	int e = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			e = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (e);
}
