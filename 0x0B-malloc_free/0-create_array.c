#icclude "main.h"

/**
 * *create_array - function that creates an array of chars & initializes it.
 * @size: it is a size of array.
 * @c: it is a char.
 * Return: 0 if size or m = 0, m if not.
*/

char *create_array(unsigned int size, char c)
{
	char *m;
	int r;

	if (size == 0 || m == 0)
	{
		return (NULL);
	}
	m = malloc(size * sizeof(char));
	for (r = 0; r < size; r++)
	{
		m[r] = c;
	}
	return (m);
}
