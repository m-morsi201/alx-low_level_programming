#include <stdio.h>

/**
 * main - is it a function to print the number of argument.
 * @argc: it is a number of argument.
 * @argv: it is an array.
 * Return: (0).
*/

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
