#include "main.h"

/**
 * print_rev - function that prints a string, in reversed.
 * @s: pointer to string.
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		putchar(s[i]);
	}
	printf("\n");
}
