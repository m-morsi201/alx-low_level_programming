#include "search_algos.h"

/**
 * print_array - Function that print an array.
 * @array: array to print it.
 * @l: left index.
 * @r: right index.
*/

void print_array(int *array, int l, int r)
{
	int i;

	for (i = l; i <= r; i++)
	{
		printf("%d", array[i]);
		if (i < r)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - Function that searches for a value in a sorted array
 *	of integers using the Binary search algorithm.
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 *
 * function must return the index where value is located.
 * Return: the index of the value or -1 if not found.
*/

int binary_search(int *array, size_t size, int value)
{
	/* l for left index, r for right index */
	int l = 0, r = size - 1, n;

	if (!array || size == 0)
	{
		return (-1);
	}

	while (l <= r)
	{
		printf("Searching in array: ");
		print_array(array, l, r);
		n = l + (r - l) / 2;

		if (array[n] > value)
			r = n - 1;
		else if (array[n] < value)
			l = n + 1;
		else
			return (n);
	}

	return (-1);
}
