#include "main.h"

/**
 * print_array -  that prints n elements of an array of integers.
 * @a: it is the input.
 * @n: it is the element input .
*/

void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		if (k != (n - 1))
			printf("%d, ", a[k]);
		else
			printf("%d", a[k]);
	}
	printf("\n");
}
