#include "main.h"



char *_strcat(char *dest, char *src)
{
	int r = 0, m;

	while (dest[r])
		r++;

	for (m = 0; src[m]; m++)
		dest[m++] = src[m];

	return (dest);
}
