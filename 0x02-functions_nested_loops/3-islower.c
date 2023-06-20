#include "main.h"

/**
 * _islower - this to chesk if c lower case or not
 *
 * @c: check the input to this character
 *
 * Return: return(1) if it 'c' is lower
 *	   return(0)if else
*/

int _islower(int c);
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
