#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter.
 * @array: it is an array.
 * @size: it is the size of the array.
 * @action: pointer to the function you need to use.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int m;

	if (array == NULL || action == NULL)
		return;

	for (m = 0; m < size; m++)
		action(array[m]);
}
