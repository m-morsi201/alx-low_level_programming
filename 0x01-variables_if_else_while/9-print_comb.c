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
	int num = 0;

	while (digit <= 9)
	{
		putchar(num + 48);

		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');

	return (0);
}
