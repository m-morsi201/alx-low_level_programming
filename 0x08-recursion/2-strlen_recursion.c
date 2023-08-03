#include "main.h"

/**
 * _strlen_recursion - it is a function that returns the length of a string.
 * @s: is a pointer of string.
 * Return: i.
*/

int _strlen_recursion(char *s)
{
	int i;

	i = 0;

	if (*s > '\0')
	{
		i++;
		_strlen_recursion(s + 1);
	}
	return (i);
}
