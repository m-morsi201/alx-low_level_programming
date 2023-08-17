#include "function_pointers.h"

/**
 * int_index - it is a function that searches for an integer.
 * @array: it is an array.
 * @size: it is a size of array.
 * @cmp: it is a pointer to the function to be used to compare values.
 * Return: (-1) if array == NULL || size <= 0 || cmp == NULL .
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (m = 0; m < size; m++)
	{
		if (cmp(array[m]) != 0)
			return (m);
	}
}
