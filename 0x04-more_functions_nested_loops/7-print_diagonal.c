#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n:  is the number of times the character \ should be printed.
*/
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int r, c;

		for (r = 0; r < n; r++)
		{
			for (c = 0; c < n; c++)
			{
				if (c == r)
					_putchar('\\');
				else if (c < r)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
