#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: is input.
 * @b: is input.
*/

void swap_int(int *a, int *b)
{
	int R;

	R = *a;
	*a = *b;
	*b = R;
}
