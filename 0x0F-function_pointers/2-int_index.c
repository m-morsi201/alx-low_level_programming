#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: it is an array.
 * @size: it is a zise of array.
 * @cmp: it is the func that will compare.
 * Return: -1 .
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int m = 0;

	if (array && size && cmp)
	{
		while (m < size)
		{
			if (cmp(array[m]))
				return (m);
			m++;
		}
	}
	return (-1);
}
