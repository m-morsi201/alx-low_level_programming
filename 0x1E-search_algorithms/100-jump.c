#include "search_algos.h"

/**
 * jump_search - Function that searches for a value
 *	in a sorted array of integers using the Jump search algorithm.
 * @array: Is a pointer to the first element of the array to search in.
 * @size: Is the number of elements in array.
 * @value: Is the value to search for.
 * Return: return the index of value, and if it doesn't exist return -1.
*/

int jump_search(int *array, size_t size, int value)
{
	int p = 0, s = 0, l = (int) size;

	if (!array || size <= 0)
	{
		return (-1);
	}

	while (s < l && p < l)
	{
		if (array[s] >= value)
			break;
		printf("Value checked array[%d] = [%d]\n", s, array[s]);
		p = s;
		s += (int) sqrt(l);
	}
	printf("Value found between indexes [%d] and [%d]\n", p, s);
	while (p < l && p <= s)
	{
		printf("Value checked array[%d] = [%d]\n", p, array[p]);
		if (array[p] == value)
			return (p);
		p++;
	}
	return (-1);
}
