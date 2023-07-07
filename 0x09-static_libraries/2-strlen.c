#include "main.h"

/**
 * _strlen -  function that returns the length of a string.
 * @s: is a sinput of string.
 * Return: length of string.
*/

int _strlen(char *s)
{
	int num_char;

	for (num_char = 0; *s != '\0'; s = s + 1)
		num_char = num_char + 1;
	return (num_char);
}
