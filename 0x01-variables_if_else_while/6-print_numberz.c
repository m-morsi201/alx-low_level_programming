#include <stdio.h>

/**
 * main - entry point
 *
 * Description:  positive or negative
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int m =	0;

	while (m <= 9)
	{
		putchart(m + '0');
		m++;
	}
	putchar('\n');

	return (0);
}
