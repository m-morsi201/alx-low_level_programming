#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9.
 * Return: 0-9, excluding 2 and 4, followed by new line
*/

void print_most_numbers(void)
{
	int m;

	for (m = 48; m < 58; m++)
	{
		if (m != 50)
		{
			if (m != 52)
			{
				_putchar(m);
			}
		}
	}
	_putchar('\n');
}
