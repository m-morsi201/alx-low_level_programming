#include "main.h"

/**
 *print_to_98 - function that prints all natural numbers to 98 .
 *
 * @n: it is the input.
*/

void print_to_98(int n)
{
	int m;

	if (n <= 98)
	{
		for (m = n; m < 98; m++)
			printf("%d, ", m);
	}
	else
	{
		for (m = n; m > 98; m--)
			printf("%d, ", m);
	}
	printf("98\n");
}
