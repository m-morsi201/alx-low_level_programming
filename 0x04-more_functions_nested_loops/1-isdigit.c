#include "main.h"

/**
 * _isdigit - it is function to checks for a digit (0 through 9).
 * @c: it is an input to check it.
 * Return: (1) if c is a digit,else  (0).
*/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
