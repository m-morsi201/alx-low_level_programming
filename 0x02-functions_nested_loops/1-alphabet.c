#include "main.h"

/**
 * main - entry point
 *
 * Description: prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
*/

void print_alphabet(void)

{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);
	putchar('\n')
}
