#include "main.h"

/**
 * *create_array - it is function that creates an array of chars.
 * @size: it is the size of the array.
 * @c: it is the char.
 * Return: 0 if (size/n) = zero.
*/

char *create_array(unsigned int size, char c)
{
	char *C = malloc(size);

	if (size == 0 || C == 0)
	{
		return (0);
	}

	while (size--)
	{
		C[size] = c;
	}
}
