#include "main.h"

/**
 * print_chessboard -  function that prints the chessboard.
 * @a: it is a rows.
*/

void print_chessboard(char (*a)[8])
{
	int m, r;

	for (m = 0; m < 8; m++)
	{
		for (r = 0; r < 8; r++)
		{
			putchar(a[m][r]);
		}
		putchar('\n');
	}
}
