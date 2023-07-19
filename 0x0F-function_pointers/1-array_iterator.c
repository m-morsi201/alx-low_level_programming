#include "1-array_iterator.c"

/**
 * array_iterator - given as a parameter on each element of an array.
 * @array: it is an array.
 * @size: it is a size.
 * @action: it is a funtion pointer.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *m = array + size - 1;

	if (array && size && action)
		while (array <= m)
			action(*array++);

}
