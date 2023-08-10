#include <stdio.h>

/**
 * main - it is function to prints all arguments it receives.
 * @argc: it is int.
 * @argv: it is an array.
 * Return: (0).
*/

int main(int argc, char **argv)
{
	int m;

	for (m = 0; m < argc; m++)
	{
		printf("%s\n", argv[m]);
	}
	return (0);
}
