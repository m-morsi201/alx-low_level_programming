#include "main.h"

/**
 * puts2 - prints every other character of a string.
 * @str: it is the input
*/

void puts2(char *str)
{
	int R;

	for (R = 0; str[R] != '\0'; ++R)
	{
		if (R % 2 == 0)
			putchar(str[R]);
	}
	printf("\n");
}
