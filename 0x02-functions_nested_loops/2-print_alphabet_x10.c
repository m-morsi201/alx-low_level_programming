#include "main.h"

/**
 * print_alphabet_x10  - well print alphabet from a to Z ten times
*/

void print_alphabet_x10(void)
{
	int l, alph;

	for (l = 1; l <= 10; l++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
			putchar(alph);
		putchar('\n');
	}
}
