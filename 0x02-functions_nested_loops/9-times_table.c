#include "main.h"

/**
 * times_table - function that prints the 9 times table.
*/

void times_table(void)
{
	int m, r, l;

	for (m = 0; m <= 9; m++)
	{
		_putchar('0');
		for (r = 0; r <= 9; r++)
		{
			_putchar(',');
			_putchar(' ');
			l = m * r;
			if (l <= 9)
				_putchar(' ');
			else
				_putchar(l);
		}
		_putchar('\n');
	}
}
