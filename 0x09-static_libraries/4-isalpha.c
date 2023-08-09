#include "main.h"

/**
 * _isalpha -  checks if character is a letter both lower or upper
 *
 * @c: is the input to check it
 *
 * Return: 1 if alphabit and 0 otherwise
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
