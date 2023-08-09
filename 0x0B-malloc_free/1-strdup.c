#include "main.h"

/**
 * *_strdup - function returns a pointer to a newly allocated space in memory.
 * @str: it is a string that will be copied.
 * Return: NULL if str or dup = NULL .
*/

char *_strdup(char *str)
{
	char *dup;
	int m, r;

	r = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (m = 0; str[m]; m++)
	{
		r++;
	}

	dup = malloc((r + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (m = 0; str[m]; m++)
	{
		dup[m] = str[m];
	}
	dup[m] = '\0';
	printf("%s\n", dup);
	free(dup);

	return (0);
}
