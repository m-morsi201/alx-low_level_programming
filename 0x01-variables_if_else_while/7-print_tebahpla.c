#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A to Z
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char aph = 'z';

	while (aph >= 'a')
	{
		putchar(aph);
		aph--;
	}
	putchar('\n');

	return (0);
}
