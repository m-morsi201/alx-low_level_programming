#include <stdio.h>
#include "main.h"

/**
 * isLower - is determines whether ascii is lower.
 * @m: char.
 * Return: 1 if true 0 if else.
*/

int isLower(char m)

{
	return (m >= 97 && m <= 122);
}

/**
 * isDelimter - is determines whether ascii is determines.
 * @m: is char.
 * Return: 1 if true 0 if else.
*/

int isDelimter(char m)
{
	int r;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (r = 0; r < 12; r++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * *cap_string - function that capitalizes all words of a string.
 * @s: is char.
 * Return: 1 if true 0 if else.
*/

char *cap_string(char *s)
{
	char *ptr = s;
	int f = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			f = 1;
		else if (isLower(*s) && f)
		{
			*s -= 32;
			f = 0;
		}
		else
			f = 0;
		s++;
	}
	return (ptr);
}
