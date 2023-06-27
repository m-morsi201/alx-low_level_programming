#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: it is the input.
*/

void puts_half(char *str)
{
	int R;

	for (R = 0; str[R] != '\0'; R++)
		;
	R = R + 1;
	for (R /= 2; str[R] != '\0'; R++)
	{
		putchar(str[R]);
	}
	printf("\n");
}
