#include <stdio.h>
#include <stdlib.h>

/**
 * main - it is function to adds positive numbers.
 * @argc: it is int.
 * @argv: it is array.
 * Return: 1 if one of the number contains symbol.
*/

int main(int argc, char **argv)
{
	int m, r, t;
	char e[] = "Error", *l;

	t = 0;

	if (argc < 1)
	{
		printf("%d\n", 0);
	}
	for (m = 1; m < argc; m++)
	{
		l = argv[m];
		while (*l > 0)
		{
			if (*l > 57 || *l < 47)
			{
				printf("%s\n", e);
				return (1);
			}
			l++;
		}
		r = atoi(argv[m]);
		t = t + r;
	}
	printf("%d\n", t);
	return (0);
}
