#include <stdio.h>

/**
 * main - it is a function ot muliplies two numbers.
 * @argc: it is int.
 * @argv: it is an array.
 * Return: (1) if does not receive two arguments.
*/

int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("%s\n," Error);
		return (1);
	}
	printf("%s\n", argv[1] * argv[2]);
	return (0);
}
