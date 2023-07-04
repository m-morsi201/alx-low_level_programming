#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals.
 * @a: array.
 * @size: size of array.
*/

void print_diagsums(int *a, int size)
{
	int m, r1 = 0, r2 = 0;

	for (m = 0; m < size; m++)
	{
		r1 += a[m];
		r2 += a[size - m - 1];
		a += size;
	}
	printf("%d, ", r1);
	printf("%d\n", r2);
}
