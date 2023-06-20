#include "main.h"

/**
 * print_alphabet - well print alphabet from a to Z
*/

void print_alphabet(void)

{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);
	putchar('\n');
}
