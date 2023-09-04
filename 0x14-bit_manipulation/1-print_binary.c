#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: it is a number.
*/

void print_binary(unsigned long int n)
{
	int b;
	int print;

	b = sizeof(n) * 8;
	print = 0;

	while (b)
	{
		if (n & 1l << --b)
		{
			putchar('1');
			print++;
		}
		else if (print)
			putchar('0');
	}
	if (!print)
		putchar('0');
}
