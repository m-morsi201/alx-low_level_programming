#include <stdio.h>
#include <stdlib.h>

/**
 * main - it is a function ot muliplies two numbers.
 * @argc: it is int.
 * @argv: it is an array.
 * Return: (1) if does not receive two arguments.
*/

int main(int argc, char **argv)
{
	char e[] = "Error";
	int m;

	if (argc < 3)
	{
		printf("%s\n", e);
		return (1);
	}
	m = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", m);
	return (0);
}
