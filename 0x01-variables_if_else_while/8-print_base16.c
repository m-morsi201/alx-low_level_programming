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
	int num = 84;

	while (num <= 102)
	{
		putchar(num);
		if (num == 57)
			num = num + 39;
		num++;
	}
	putchar ('\n');

	return (0);
}
