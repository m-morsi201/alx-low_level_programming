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
	char aph = 'A';

	while (aph <= 'Z')
	{
		putchar(aph);
		aph++;
	}
	putchar('\n');
	return (0);
}
