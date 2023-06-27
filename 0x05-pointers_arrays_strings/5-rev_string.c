#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: is string input.
*/

void rev_string(char *s)
{
	int Y, i;
	char M;

	for (Y = 0; s[Y] != '\0'; ++Y)
		;
	for (i = 0; i < Y / 2; i++)
	{
		M = s[i];
		s[i] = s[Y - 1 - i];
		s[Y - 1 - i] = M;
	}

}
