#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: is string.
 * Return: string.
*/

char *string_toupper(char *str)
{
	int m;

	for (m = 0; str[m] != '\0'; m++)
	{
		if (str[m] >= 97 && str[m] <= 122)
		{
			str[m] = str[m] - 32;
		}
	}
	return (str);
}
